/*

n = 4
* - - - - - *
  * - - - *
    * - *
      *

*/

#include<stdio.h>

int main()
{
  int n, start, end;

  printf("Enter a number : ");
  scanf("%d", &n);

  for(int i=n-1; i>=0; i--)
  {
    for(int j=1; j<2*n; j++)
    {
      start = n-i;
      end = n+i;

      if (j==start || j==end) printf("* ");
      else if (j>start && j<end) printf("- ");
      else printf("  ");
    }
    printf("\n");
  }
}
