rev_num = 0
base_pos = 1

# Recursive function to reverse
# digits of num


def reversDigits(num):
	global rev_num
	global base_pos
	if(num > 0):
		reversDigits((int)(num / 10))
		rev_num += (num % 10) * base_pos
		base_pos *= 10
	return rev_num


# Driver Code
num = int(input('enter number you want to reverse'))
print("Reverse of no. is ",reversDigits(num))
