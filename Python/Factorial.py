
num = int(input("Enter a number: "))
factorial = 1
if num < 0:
num = int(input("Enter a number: "))                       #Taken number from user
factorial = 1                                              #defining variable
if num < 0:                                                #checking number is negative or not
   print("Sorry, factorial does not exist for negative numbers")
elif num == 0:
elif num == 0:                                             #checking number is zero or not
   print("The factorial of 0 is 1")
else:
   for i in range(1,num + 1):
   for i in range(1,num + 1):                               #using for loop this program is done
       factorial = factorial*i
   print("The factorial of",num,"is",factorial)
