from sqlmodel import create_engine, SQLModel      #engine holds the connections to the database.


# step : 3
# Database configuration
# creating a SQLite engine in SQLMode

sqlite_file_name = "Database.db"
DATABASE_URL = f"sqlite:///{sqlite_file_name}"


engine = create_engine(
    DATABASE_URL,
    # echo=True,                                  # Log SQL queries (optional)
    connect_args={"check_same_thread": False} #optional  # Allow multi-threaded access
)


#to create the tables for all the table models.
def create_db_and_tables():
    SQLModel.metadata.create_all(engine)