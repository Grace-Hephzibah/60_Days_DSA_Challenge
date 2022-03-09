/*
n = 5

        *
      * *
    * * *
  * * * *
* * * * *
  * * * *
    * * *
      * *
        *

*/

#include<stdio.h>

int main()
{
  int n;

  printf("Enter a number : ");
  scanf("%d", &n);

// Top Part
  for(int i=1; i<=n; i++)
  {
    for(int j = 1; j<=n; j++)
    {
      if (i+j > n) printf("* ");
      else printf("  ");
    }
    printf("\n");
  }
// Bottom Part
  for(int i=2; i<=n; i++)
  {
    for(int j = 1; j<=n; j++)
    {
      if (j >= i) printf("* ");
      else printf("  ");
    }
    printf("\n");
  }

  return 0;
}
