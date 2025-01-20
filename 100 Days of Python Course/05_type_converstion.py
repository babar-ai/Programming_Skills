name="baber"
age=21
weight=56.5

#now to find out the data type of the above variables
print(type(name))
print(type(age))
print(type(weight))

#now to to convert the type of varible lets see
#THERE ARE TWO TYPES OF CONVERSIONS
# IMPLICT CONVERSIONS
person=(age+weight)
print(person,type(person))

#explicit conversion
person=int(age+weight)
print(person,type(person))