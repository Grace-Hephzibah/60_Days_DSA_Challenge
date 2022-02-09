#include<stdio.h>

void fun(int n)
{
  if (n>0)
  {
    printf("%d\t", n);
    fun(n-1);
  }
}

int main()
{
  int test = 5;

  fun(test);

  return 0;
}
