#include<stdio.h>

void fun1(int n)
{
  if(n>0)
  {
    printf("%d\t", n);
    fun1(n-1);
  }
}

void fun2(int n)
{
  if (n>0)
  {
    fun2(n-1);
    printf("%d\t", n);
  }
}

int main()
{
  int test = 3;

  fun1(test);
  printf("\n");
  fun2(test);

  return 0;
}
