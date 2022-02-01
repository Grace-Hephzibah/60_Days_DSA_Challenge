/*
n = 4

1
1 2 1
1 3 3 1
1 4 6 4 1

*/

#include<stdio.h>

int main()
{
  int n, temp;

  printf("Enter a number : ");
  scanf("%d", &n);

  for (int i=0; i<n; i++)
  {
        for (int j=0; j<=i; j++)
        {
            if (j==0 || i==0) temp = 1;
            else temp = (i-j+1)*temp/j;

            printf("%d ", temp);
        }
        printf("\n");
    }
}
