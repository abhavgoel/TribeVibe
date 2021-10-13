#include<stdio.h>
int main()
{
  int year;
  scanf("%d",&year);
  if (year % 400 == 0)
        printf("Leap year");
  if (year % 100 == 0) 
    printf(" Not a Leap year");
  if (year % 4 == 0)
      printf("Leap year");
}
