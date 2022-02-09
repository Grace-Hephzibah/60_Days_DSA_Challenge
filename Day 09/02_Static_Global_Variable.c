#include<stdio.h>

int fun(int n)
{
  if (n>0)
    return(fun(n-1) + n);

  return 0;
}

int fun1(int n)
{
  static int x = 0;

  if (n>0)
  {
    x++;
    printf("\n Entry : %d", x);
    return (fun1(n-1) + x);
    //printf("\n Exit: %d", x); -> Useless
  }
  return 0;
}

int main()
{
  int test = 8;

  int result = fun1(test);
  printf("\n %d", result);

  result = fun(test);
  printf("\n %d", result);

}
