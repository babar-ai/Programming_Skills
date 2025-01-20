class Atm:
    #constructor in python class
    #The purpose of self is to access and manipulate attributes and methods of the current instance.
    #self is a reference to the current instance of a class. When you define methods within a class in Python, you explicitly include self as the first parameter in the method definition.
    def __init__(self):      
     self.pin=""
     self.balance = 0
     print(id(self))

     #lets print the data inside the constructor
    def display(self):
      print('your initial pin and balance is {} , {} '.format(self.pin,self.balance))
      #{} placeholder
      self.menu()

     #string constructor

    def menu(self):
       userinput=input('''
                
            how would you like to proceed?
            1. Enter 1 to create PIN
            2. Enter 2 to Deposit
            3. Enter 3 to withdraw
            4. Enter 4 to cheack balance
            5. Enter 5 to exit
       ''')
       if userinput == '1':
          self.create_pin()


       elif userinput == '2':
          self.deposit()

       elif userinput == '3':
          self.withdraw_amount()

       elif userinput == '4':
          self.check_balance()
       else:
          print('bye')

#to define a methord for pin creation
          
    def create_pin(self):
          pin=input('enter your pin :\n')
          self.pin=pin
          print('PIN SET!')
        
# methord for Deposit amount
    def deposit(self):
          temp=input('enter your PIN :\n')
          
          ''' #if the PIN is not created yet
          if self.pin == "":
            print("Please create a PIN first.")
            return'''
          if temp == self.pin:
             amount=int(input('how much amount you want to deposit'))
             self.balance = self.balance + amount
             print('amount has been deposit successfuly!')
          else:
             print("invalid Pin")

# methord for Withdraw_amount
    def withdraw_amount(self):
        temp=input('enter your PIN :\n')
          
        if temp == self.pin:
             amount=int(input('how much amount you want to withdraw'))
             if amount<=self.balance:
                self.balance = self.balance - amount
                print('operation successful')
             else:
                print("insufficent fund")
        
        else:
            print('invalid PIN')

# methord for checking balance
    
    def check_balance(self):
        temp=input('enter your PIN :\n')
          
        if temp == self.pin:
            print(self.balance)
        else:
            print("invalide pin")

#to create an object of a class 

while True:
 A1=Atm()            
 '''A1.deposit()
 A1.withdraw_amount()
 A1.check_balance()
 id(A1)'''
 print(id(A1))       # here note that both the id's location address are same for A1 and self. hence actually both are same (object of class) == self keyword 
                     #let we create anther object (instance of the class for anther user)
 '''A2=Atm()
 A2.deposit()
 A2.withdraw_amount()
 '''
 #Similarly we can create further objects for many users 
 #so this is the speciality of an object which keep each recode separte 

 #let create an object of the class which should print the data inside the  constructor
 A3 = Atm()
 A3.display()
 ch=input("do you want to go to main menu (y/n) ")
 if ch.lower() != 'y':
    break


