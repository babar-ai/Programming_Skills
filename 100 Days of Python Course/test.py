'''# 1. "{}" is known by placeholder 
class Atm:
    # Constructor in Python class
    def __init__(self):      
        self.pin = ""
        self.balance = 0
        print("ID:", id(self))

    # Let's print the data inside the constructor
    def display(self):
        print('Your initial pin and balance is {}, {}'.format(self.pin, self.balance))

#1. Example usage
atm = Atm()
atm.display()

# 2. lets learnt anther return concept in methord of the class 
#we can access any data member of the class through its object remember


class student:

 def __init__(self):
  age = 0
  marks = 1050

def view(self):
 return self.age*2

atm.age = 10
print('New Age:',atm.view())

# 3. dunder method: the term “dunder” comes from this use of double underscores.denote a dunder method by placing double underscores at the beginning and end of the name
#    dunder method is also known by magic methord 
#    These methods are called implicitly by Python in certain situations.
#    These methods allow you to customize the behavior of your objects,
'''
class Trangle:
   
   #method __init__()which is called a constructor and is used to initialize the object’s attributes.
   
   def __init__(self,base,height):
      self.base = base
      self.height = height

   def area(self):
      return 0.5 * self.base * self.height
   
#let define an magic or dunder methord to add both the area for different objects
   
   def __add__(self,other):
    return self.area() + other.area()



#Now lets create an object of the class trangle
   
#obj 1
triangle1 = Trangle(10,5)
#obj 2
triangle2 = Trangle(15,10)

print('The Area of the triangle 1 is :',triangle1.area())
print('The Area of the triangle 2 is :',triangle2.area())
print('The sum of the Area1 and Area2 of the triangles  is :',triangle1 + triangle2)






