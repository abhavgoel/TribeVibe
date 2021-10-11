
n=int(input("Enter number:"))                                  #Take number from user 
temp=n                                                               
rev=0
while(n>0):                                                     #while loop is used
    dig=n%10                                                    # '%' operator find the modulus(remainder) of 2 diving number
    rev=rev*10+dig
    n=n//10
if(temp==rev):                                                  #checking entered number is palindrome or not
    print("The number is a palindrome!")
else:
    print("The number isn't a palindrome!")
