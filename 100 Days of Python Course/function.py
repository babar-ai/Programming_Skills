
#If the number of arguments is unknown, add a * before the parameter name:

def student(*marks):
    print("the marks of tayyab is:",marks[1])
    
student(23,45,24)

##default parameter

def location(country = "india"):
    print("your country is " + country)

location("Pakistan")
location()

##Passing a List as an Argument

def food(fruits):
    for i in fruits:
        print(i)

fruits = ["mango","graps","banana"]
food(fruits)

#to return a value 

def expericen(age):
    return age*10

print(expericen(20))

#t if you for some reason have a function definition with no content, put in the pass statement to avoid getting an error.
def myfunction():
  pass