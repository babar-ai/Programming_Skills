

# main.py
# Roadmap to building Database connection
'''
1. userguid  -> SQL(Relational) Database -> ORM (object Relational mapping) -> SQLALchemy(ORM) -> Database configuration 
'''


what is ORM?

ORM (Object-Relational Mapping) is a programming technique that allows developers to interact with a relational database using objects,
rather than writing raw SQL queries. It provides a way to map tables in a database to classes in a programming language, and rows in those
tables to objects of those classes.
SQLAlchemy: A powerful and widely-used ORM in Python.


Create a Session Dependency?

A Session is what stores the objects in memory and keeps track of any changes needed in the data, then it uses the engine to communicate with the database.
We will create a FastAPI dependency with yield that will provide a new Session for each request. This is what ensures that we use a single session per request. 🤓
Then we create an Annotated dependency SessionDep to simplify the rest of the code that will use this dependency.


Depends?

In FastAPI, Depends is a dependency injection system that allows you to define reusable logic or components and inject them into your endpoints or
 other functions. It is imported from fastapi as Depends.
What is Dependency Injection?
Dependency Injection is a design pattern where dependencies (like reusable functions, database connections, or authentication logic) are "injected" into a function or
 class instead of being hardcoded. This makes your code modular, reusable, and easier to test.


Annotated?

 In FastAPI, Annotated is used to provide metadata about function parameters, primarily to define dependencies, validation,
or additional type hints in a cleaner way.



PATCH request
Your PATCH request in FastAPI is designed to update an existing hero in the database using session.get() to fetch the hero and 
sqlmodel_update() to apply changes