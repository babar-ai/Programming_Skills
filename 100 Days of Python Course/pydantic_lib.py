

# dynamic datatype is the disadvantage of python bcz it create more issues but here is the solution 
# >pydantic  this is not build in but perform the task which dataclass does not
# dataclass : dataclass is python build in library which doest not perform "Data Validaion", "Serialization"
'''
What is Pydantic?
Pydantic is a data validation and parsing library for Python. It provides a simple and intuitive way to define data models with type annotations and automatically validates, parses, and converts data to ensure it conforms to the specified schema.
Parsing is the process of analyzing and converting data (often text) into a structure that a program can understand and work with.
Pydantic is widely used in modern Python web frameworks (like FastAPI) and other applications that deal with structured data, such as JSON, APIs, or configurations.

#Key Features of Pydantic
> Type Validation
> Automatic Parsing
> Error Handling
> Integration with Type Hints
> Custom Validators
> Data Export

'''
# Pydantic is centered around the BaseModel class. You define a data model by subclassing BaseModel and adding attributes with type annotations.
'''
What is BaseModel in Pydantic?
BaseModel is a core class in the Pydantic library that serves as the foundation for defining structured data models. When you create a custom data model by subclassing BaseModel, 
Pydantic provides powerful features like data validation, parsing, and serialization automatically.

Purpose of BaseModel
> Define Data Models
> Validate Data
> Type Casting
> Serialization/Deserialization -> convertion to dictionary, json format etc
> Custom Validation

'''

#example
from pydantic import BaseModel, EmailStr
#note Without BaseModel, it’s just a regular Python class which will not perform any automation like type validation , automatic type casting, .dic() and .jeson() will not works
class User(BaseModel):
    id: int 
    name: str
    # email: str
    email: EmailStr
    is_active: bool = True #default value 

#creating instance 
user=User(id = "1", name='babar', email = 'baberraheem055@gmail.com') #automatically validate datatype
print(user)

# Serialization
user_dict = user.dict()
print(user_dict)    

#convet inot json()
user_json = user.json()
print(user_json)               #json format


#anther powerfull feature of pydantic 

from pydantic import BaseModel, EmailStr

# Define Address model
class Address(BaseModel):
    street: str
    city: str
    zipcode: str

# Define User model with Address nested
class User(BaseModel):
    id: int
    name: str
    email: EmailStr
    address: Address  # Nested model
    is_active: bool = True

# user = User(id = 1, ...)
user_data = {                        #this is the json format in which you usually received data 
    "id": 1,
    "name": "Babar",
    "email": "baberraheem055@gmail.com",
    "address": {
        "street": "123 Main St",
        "city": "Islamabad",
        "zipcode": "44000"
    }
}

user = User(**user_data)   #note: *args → for unpacking a list or tuple and **kwargs → for unpacking a dictionary

print(user)
print(user.dict())

