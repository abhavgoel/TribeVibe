#include<stdio.h>
int main()
{
  int a, i, fact=1;
	
	printf("Enter Any Number: ");
	scanf("%d",&a);
	
	for(i=1; i<=a; i++){
		fact = fact*i;
	}
	printf("Factorial of %d is %d",a,fact);
	return 0;
}
