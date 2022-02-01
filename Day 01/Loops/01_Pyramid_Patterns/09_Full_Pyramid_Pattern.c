/*

n = 4

        1
      2 3 2
    3 4 5 4 3
  4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5

*/

#include<stdio.h>

int main()
{
  int n, val;

  printf("Enter a number : ");
  scanf("%d", &n);

  for(int i=1; i<=n; i++)
  {
    val = i-1;
    for(int j=1; j<2*n; j++)
    {
      if (j>n-i && j<=n) { val++; printf("%d ", val); }
      else if (j<n+i && j>n) { val--; printf("%d ", val);}
      else printf("  ");
    }
    printf("\n");
  }
}
