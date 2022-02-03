#include<iostream>
using namespace std;

class Test
{
  int a;
  public:
    Test(int val)
    {
      a = val;
    }
    int operator +(Test &obj)
    {
      return a + obj.a;
    }
};
int main()
{
  Test t1(10), t2(100);
  int sum = t1+t2;
  cout<<sum;

}
