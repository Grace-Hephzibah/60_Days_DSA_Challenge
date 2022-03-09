/*

a = 5
b = 4

* * * *
* * * *
* * * *
* * * *
* * * *

*/

#include<stdio.h>

int main()
{
  int a,b;
  printf("Enter the values : ");
  scanf("%d %d", &a, &b);

  for(int i=1; i<=a; i++)
  {
    for(int j=1; j<=b; j++)
      printf("* ");
    printf("\n");
  }

  return 0;
}
