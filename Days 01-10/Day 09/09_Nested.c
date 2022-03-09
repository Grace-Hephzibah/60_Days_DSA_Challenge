#include<stdio.h>

int fun(int n)
{
  if (n>100)
    return n-10;

  else
    return (fun(fun(n+11)));
}

int main()
{
  int test = 95;

  int result = fun(test);

  printf("%d", result);
  return 0;
}
