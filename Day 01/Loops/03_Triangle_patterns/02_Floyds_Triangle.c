/*

n = 4

1
2 3
4 5 6
7 8 9 10

*/

#include<stdio.h>

int main()
{
  int n, val = 1;

  printf("Enter a number : ");
  scanf("%d", &n);

  for(int i=1; i<n; i++)
  {
    for(int j=1; j<=i; j++, val++) printf("%d ", val);
    printf("\n");
  }

}
