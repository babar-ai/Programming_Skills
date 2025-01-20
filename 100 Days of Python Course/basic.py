"""
#dynamic typing
name = "Brook"
print("Hello " + name)

#dynamic binding: refers to assigning different data type values to same variable i.e
name=8
print(name)

#variable assign
#multiple variable on a single line
a=3;b=8;c=0
a,b,c=3,8,0   #both are correct
#calculation
print(5+3)
print(5/3)

print("++++++++++++++++++++++++++++++++++++++++++++")
import math

result = math.sqrt(9)
print(result)

#or
result = 9 ** 0.5
print(result)

#if else commands

age= 32
if age>23:
    print("you are eliable")
elif age==23:
    print("not eligable")
"""
#++++++++++++++++++++++++++++++++++++++++++++++++++++
    #funtions in python
# 1.In Python a function is defined using the "def" keyword:
def my_print():
    print("this is my first function in python")

#funtioncall
my_print()

#aurgument pass 

def stu(name):
    print(name + " khan")
    
stu("baber")
stu("shayan")

#if the number of aurgements is unknown at the start
def characteristics(*ch):
    print("ali is "+ ch[0])
    print("ali is "+ ch[1])
    print("ali is "+ ch[2])

characteristics("good","antelligent","sincer")

#defalut parameters
def my_function(country = "Norway"):
  print("I am from " + country)

my_function("Sweden")
my_function("India")
my_function()
my_function("Brazil")

#passing list to funtion as an argumet
def sumf(arr1):
    for i in arr1:
        print(i)

arr=["ali","baber","tayyab"]
arr1={2,3,4,4,5}
sumf(arr1)

#division 

print(50/3)            #result 16.6666666
#to get floor value use double divison sign "//" i,e
print(50//3)            #result 16
print(int(50/3))        #result 16

#reminder
print(49%7)             #reminder 0

#middle space
print("hello",'how are you doing','nothing')
print("hello",'how are you doing','nothing',sep='/')
#to calculate power i.e 5^3
print(5**3)

#boolean dt
print(True)
print(False)

#complex datatype
print(4+5j)

#STRINGS
print('hello world')                
print("i don't have")
print('hello world',end=' ')                #to print both strings in the same line
print("i don't have")

print('Yes, he said \n ali repaly') #backlash \n for newline
print('C:\some\name')               #this line of code will not print correctly due to "\n"
print(r'C:\some\name')              #here byusing "r" before 'C:\some\name' will avoid this logical error

#i. string concatenation
f_name='baber'
print (f_name + 'khan')
print('baber''raheem')

#ii. string index
name='ali'
print(name[0])
print(name[1])
print(name[-1])      #[-1] will always print the last element of the array

#length of the list
array=['a','n']
len(array)

#take input
input("please enter your name")
    #we can also directly assign to variable
name=input("please enter your name")

#write a  program to take two numbers from the user and add them 

#here note that the default datatype of the input variable is string we have to typecost it
#remember that this type convertion is temporary not permanent
a=int(input("first number"))
b=int(input("second number"))
(result):int=(a+b)
print(result)

#for loop 
array=['a','n','b','v']
for i in array:
    print(i)

#rang() It generates arithmetic progressions
arr1=[1,2,3,4,5,6]
for i in range(9):
    print(i)

#to print the indices plus the element at that indices #problem
    ''' caution: Use a list when you need to maintain the order of elements, and when you might have duplicates, or when you need to access elements by their index.
        Use a set when you need to ensure uniqueness of elements or when you need to perform fast membership tests.'''

arr2={'baber','raheem','shayan','zeshan','shah zaid'}
#to change baraket to list
list_arr2=list(arr2)
for i,item in enumerate(list_arr2):
    print(i,item)


#explicit conversion - when code is written to manually convert one data type to another using a data type conversion function:

'''str() - converts a value (often numeric) to a string data type

int() - converts a value (usually a float) to an integer data type

float() - converts a value (usually an integer) to a float data type
'''
#extra coursea prob
'''bill = 47.28   # Assign "bill" variable with bill amount
tip = bill * 15/100 # Multiply by stated tip rate 
total = bill + tip # Sum the "total" of the "bill" and "tip"
share = total/2 # Divide "total" by number of friends dining
print("Each person needs to pay: " + str(share)) # Enter the required string and "share" 
# Hint: Remember to convert incompatible data types'''

#coursea 
'''
word1 = "How"
word2 = "do"
word3 = "you"
word4 = "like"
word5 = "Python"
word6 = "so"
word7 = "far?"

print(word1 + " " + word2 + " " + word3 + " " + word4 + " " + word5 + " " + word6 + " " + word7)

'''


#keywords in python
import keyword
print(keyword.kwlist) #will show a list of keywords

#user define funtion 
def greeting(name):
    print("assalam walakum! "+name)

greeting("ali")
greeting("baber")

#some built_in funtions
#sorted()                  this function will print the list in ascending order One more important detail about the sorted() function is that it cannot take lists or strings that have elements of more than one data type. For example, you can’t use the list [1, 2, "hello"].
arr3=[2,1,4,2,6,5]
print(sorted(arr3))

#max() & min()
time_list = [12, 2, 32, 19, 57, 22, 14]
print(min(time_list))
print(max(time_list))

#return
def area_triangle(base, height):
    return base*height/2

#conversion of a km to m
def convert_km(km):
    meters=km*1000
    return meters

print(convert_km(2))

#comparation operators
print(5==5)
print(1!=1)

#logical operators ->Connect one or more statement
#i. and
#ii. or
#iii. not

#i. and (both the conditon should be true)
print(5>4 and 3<5) 
print((6*3 >= 18) and (9+9 <= 36/2))

#ii. or (one of the condition should be true)
print('baber'>'shaya' or 'khan'>'baber') 

#iii. not (print ture if the answer is false otherwise true)
print(not 4>5)

#BRANCHING :the ability of a program to alter its execution sequence
#if ,else,elif.....
def student(age):
    if age>20:
     print("you are eligable")
    else:
        if(age==20):
         print("you are eligable")
        else:
            print("you are not eligable")

 #elif(age==20):
 #   print("you are eligable")
student(21)
student(20)
student(19)

#example
if number > 11: 
  print(0)
elif number != 10:
  print(1)
elif number >= 20 or number < 12:
  print(2)
else:
  print(3)