#include<stdio.h>
int main()
{
   int m, n;
    long long int val = 1;
    printf("Enter the number you want to evaluate the power\n");
    scanf("%d", &m);
    printf("Enter the power of that number\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        val = val * m;
    }
    printf("The value of %d to the power %d is: %d", m, n, val);
    
    return 0;
}
