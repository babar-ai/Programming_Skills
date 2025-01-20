

''''
type_hints:
        allows developers to specify the expected data types of variables, function arguments, and return values. While Python is dynamically typed, 
        type hints improve code readability, help catch errors early during development, and enable better tooling support.


'''

# Syntax of Type Hints / Type Annotations

name: str = 'Babar'
Reg_no: int = 241

def greet(name: str) -> str:
    return f'hello, {name}'

# Optional Type
'''
Use Optional when a value can be of a specified type or None:
'''
from typing import Optional

#funtion Annotation
def find_user(user_id: int) -> Optional[str]:
    
    if user_id == 0:
        return None
    
    return 'User Name'

#some more advance type_hints or type Annotation
#List
from typing import List, Dict, Set, Any
x: List[List[int]] = [[1,2,3],[]]

#Dictionary 
x: Dict[str, str] = {"a":"b"}
x: Set[str] = {'a','b'}

# WE can also do this like
Vector = Dict[str, str] 

def foo(d: Vector) -> Vector:
    print(d)
    

#Any
def foo(output: Any):
    pass