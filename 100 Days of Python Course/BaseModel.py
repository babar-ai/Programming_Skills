
#if pip not work use pip3 for installing these modules
'''
Pydantic will perform runtime checks, even when type annotations are not given

'''
import pydantic

class Person(pydantic.BaseModel):
    name: str
    age: int
    is_employee: bool

person = Person.model_validate({
    "name": "Baber",
    "age": "twentiy",  # error
    "is_employee": True 
})

print(person.age)