
num = input("enter your number")                          #Taking number from user
reversed_num = 0

while num != 0:                                            #while loop is used here
    digit = num % 10                                       # '%' operator finds modulus(remainder)  
    reversed_num = reversed_num * 10 + digit
    num //= 10

print("Reversed Number: " + str(reversed_num))
