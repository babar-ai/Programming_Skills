
# Annotated
'''
#from typing_extensions import Annotated
Purpose: Annotated is used to attach metadata to type hints. It provides a way to add additional 
context or information about the type, which can be useful for documentation, validation, or other purposes
They are primarily used for:
Documentation: To indicate the expected types of function arguments and return values.
'''
# from typing_extensions import Annotated
from typing import Annotated

def greet(message: Annotated[str, "the message should be less than 3 words"]) -> str:
    if not isinstance(message, str):
        raise TypeError("Message must be a string")
    
    if len(message) > 10:
        raise ValueError("Message must be less length")
    
    return message

# This will now raise a TypeError because 123 is not a string

message = greet(123)
print(message)
