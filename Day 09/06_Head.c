#include<stdio.h>

void fun(int n)
{
  if (n>0)
  {
    fun(n-1);
    printf("%d\t", n);
  }
}

int main()
{
  int test = 5;

  fun(test);

  return 0;
}
