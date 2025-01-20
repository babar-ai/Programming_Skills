
'''
decorator:
 
Python Decorators
A decorator in Python is a function that modifies the behavior of another function, method, or class.
Decorators are used to wrap a function and add functionality to it without modifying its original code.
They are a powerful tool for improving code modularity and reusability.

'''

def greet(fx):
    
    def mfx():
        print('Assalam Walikum')
        fx()
        print("good bye")
    
    return mfx

@greet
def hello():
    print('Hello world')


hello()