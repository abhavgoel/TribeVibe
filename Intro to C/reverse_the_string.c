#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
  char str[50], temp;
  int i, left, right, len;
  printf("Enter a string to reverse order: ");
  scanf("%s", &str);
  len = strlen(str);
  left = 0;
  right = len - 1;
  for (i = left; i < right; i++)
  {
    temp = str[i];
    str[i] = str[right];
    str[right] = temp;
    right--;
  }
  printf(" The reverse of the original string is: %s ", str);
  getch();
}
