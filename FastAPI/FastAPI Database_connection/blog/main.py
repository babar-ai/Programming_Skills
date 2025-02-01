
from sqlmodel import Session, select
from models import Hero, HeroCreate, HeroPublic, HeroUpdate
from Database import engine, create_db_and_tables
from typing import Annotated
from fastapi import Depends, FastAPI, HTTPException, Query



# Dependency to get a database session.. see readme
def get_session():                   
    with Session(engine) as session:
        yield session


#Annotated define dependencies, validation
SessionDep = Annotated[Session, Depends(get_session)]                 # note: def read_items(db: SessionDep): == def read_items(db: Session = Depends(get_session)):

app = FastAPI()


# We will create the database tables when the application starts.
@app.on_event("startup")
def on_startup():
    create_db_and_tables()


@app.get("/")
def home():
    return {"message": "Welcome to Hero API!"}



# # use the SessionDep dependency (a Session) to add the new Hero to the Session instance, commit the changes to the database,
# @app.post("/heroes/")
# def create_hero(hero: Hero, session: SessionDep) -> Hero:
#     session.add(hero)
#     session.commit()
#     session.refresh(hero)  # Refresh to get the auto-generated ID
#     return hero

#for securtity resone we update the above post request

@app.post('/heroes/')                                                       # Hero_base -> name , age   
def create_hero(hero: HeroCreate, session: SessionDep) -> HeroPublic:  # <- responce_model  # Hero -> id, secret_name,  # HeroPublic -> id  # HeroCreate -> secret_name
                                                                                                             
    # Convert Pydantic model (HeroCreate) to a SQLModel object (Hero)
    db_hero = Hero.model_validate(hero)

    
    session.add(db_hero)
    session.commit()
    session.refresh(db_hero)
    return db_hero

    
@app.get('/heroes')
def read_heroes( session: SessionDep, offset: int = 0, limit: int = 100):
    
    heroes = session.exec(select(Hero).offset(offset).limit(limit)).all()
    return heroes


#Reading One hero
@app.get('/heroes/{hero_id}')
def read_hero(hero_id: int,session:SessionDep):
    hero = session.get(Hero, hero_id)                                #get() is a method provided by SQLAlchemy and SQLModel that is used to fetch a single record from the database by its primary key.
    if not hero:
        raise HTTPException(status_code=404, detail="hero not found")
    return hero


# # We can read a single Hero.
# @app.get("/heroes/{hero_id}")
# def read_hero(hero_id: int, session: SessionDep) -> Hero:
#     hero = session.get(Hero, hero_id)
#     if not hero:
#         raise HTTPException(status_code=404, detail="Hero not found")
#     return hero


#Update a Hero with HeroUpdate

@app.patch('/heroes/{hero_id}', response_model=HeroPublic) 
def update_hero(hero_id: int, session: SessionDep, hero = HeroUpdate):
    
    hero_db = session.get(Hero, hero_id)
    if not hero_id:
        raise HTTPException(status_code=404, detail= "Hero not found")
    hero_data = hero.model_dump(exclude_unset = True)                   # extracts only the fields that the user actually sent in the request.
    hero_db.sqlmodel_update(hero_data)                                  # sqlmodel_update() applies the changes to the hero instance.
    session.add(hero_db)                                                # Marks the hero object for an update.
    session.commit()                                                    # Saves the changes in the database
    session.refresh(hero_db)
    
    return hero_db




@app.delete('/hero/delete')
def delete_hero(hero_id: int, session: SessionDep):
    
    hero = session.get(Hero, hero_id)
    if not hero_id:
        raise HTTPException(status_code=404, detail= "Hero not found")
    session.delete(hero)
    session.commit()
    return {'ok': True}




