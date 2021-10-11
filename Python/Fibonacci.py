
n = int(input("How many terms? "))
n1, n2 = 0, 1
n = int(input("How many terms? "))                                  #Taking number from user
n1, n2 = 0, 1                                                       #defining variables 
c = 0
if n <= 0:
if n <= 0:                                                          #checking number is negative number or not
   print("Please enter a positive integer")
elif n == 1:
elif n == 1:                                                        #checking number is equal to 1 or not
   print("Fibonacci sequence upto",n,":")
   print(n1)
else:
else:                                                               
   print("Fibonacci sequence:")
   while c < n:
   while c < n:                                                     #while loop is used to done this program
       print(n1)
       nth = n1 + n2
       n1 = n2
