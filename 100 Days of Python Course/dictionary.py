

 #note: a dictionary in Python is essentially a hashtable, but the term "hashtable" is often used
    #more broadly to refer to the concept of a data structure that maps keys to values using a hash function, whereas "dictionary" specifically refers to the Python implementation of this concept.

#to create dictionary

my_dict = { "name" : "baber",
            "reg No": "22mdbcs241",
             "dept": "data science"
          
          }               


#to add a new key_pair value

my_dict["uni"] = "uetm"

# Updating a value
my_dict["dept"] = "cs"

# # Removing a key-value pair
# del my_dict["city"]

print(my_dict)