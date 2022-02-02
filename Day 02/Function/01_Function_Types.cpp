#include<iostream>
using namespace std;

void add1(int a, int b)
{
  cout<<"\nCall By Value :"<<a+b<<endl;

  a = 20;
  b = 10;
  // Implements no change in the orig variables
}

void add2(int *a, int *b) // New variable for x and y are created
{
  cout<<"\nCall By Address : "<<*a+*b<<endl;
  *a = 20;
  *b = 10;
  //Implements change.
}

void add3(int &a, int &b) // Same variable x and y but alias name is given for this scope
{
  cout<<"\nCall By Reference : "<<a+b<<endl;
  a = 20;
  b = 10;
  //Implements change
}
int main()
{
  int x = 5, y = 4;
  add1(x,y);
  cout<<x<<" "<<y<<endl<<endl;
  add2(&x, &y);
  cout<<x<<" "<<y<<endl<<endl;
  add3(x,y);
  cout<<x<<" "<<y<<endl<<endl;
}
