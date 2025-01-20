'''
What is JSON?
JSON (JavaScript Object Notation) is a lightweight, text-based data interchange format that is easy for humans to read and write, and easy for machines to parse
and generate. JSON is language-independent, meaning it can be used with virtually any programming language, including Python, JavaScript, and many others.
JSON is widely used for transmitting data between a server and a client, particularly in web applications and APIs. It is a simple format that consists of key-value 
pairs and is similar to how data is represented in Python dictionaries, JavaScript objects, or key-value pairs in databases.

JSON Syntax
JSON consists of two main structures:

Objects: An unordered collection of key-value pairs enclosed in curly braces {}.
Arrays: An ordered collection of values enclosed in square brackets [].

main differenc between python object and JSON string

Data Type:
person: Python dictionary.
person_json: JSON-formatted string.

Usage:
person: Used within Python for computations and manipulations.
person_json: Used for transmitting or storing data.

Mutability:
person: Mutable; can directly modify values.
person_json: Immutable; changes require conversion back to Python.

Structure:
person: Uses Python data types like True, None.
person_json: Converts to JSON-compatible types like true, null.

Serialization:
person: Not serialized; native Python object.
person_json: Serialized for external usage or storage.

Access:
person: Access data directly with keys, e.g., person["name"].
person_json: Cannot access directly; needs deserialization.

Compatibility:
person: Only works within Python.
person_json: Works across different programming languages and platforms.

# parsing:
# In the context of programming, parsing refers to the process of analyzing and converting data from one format into another, usually into a structure that can be easily understood and manipulated by a program.

'''
#Object: A collection of key-value pairs enclosed in {}.

# Example

person ={
        "name": "Jone",
        "age": 20,
        "department": "Data Science",
        "marks" : [21, 30,35],
        "is_student" : True,
        "address": {
            "street" : "123 mian str",
            "city": "New York"
        }
        
    }

# Convert python object to JSON string
import json
person_json = json.dumps(person)
# print(person_json)                         #the only difference in the printed structue is convetion of "True" into true

#convertion of json file to python object
parsed_data = json.loads(person_json)
print(parsed_data)
#to create and write in json file 

with open('data.json', 'w') as file:
    json.dump(person, file, indent=4)     # `indent=4` makes the JSON file human-readable    # Use json.dump() to write the JSON data to the file.

                                          
# print("JSON file saved as 'data.json'")


# Reading a JSON File in Python

with open('data.json', 'r') as file:
#to load JASON content into python object
    data = json.load(file)                              # data is now python object
    
print(data)
print(data['name'])
print(data['is_student'])
print(data['marks'])