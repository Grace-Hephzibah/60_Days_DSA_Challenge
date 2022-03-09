#include<iostream>
using namespace std;

class Parent
{
  int a;
  public:
  Parent()
  {
    cout<<"Enter a value : ";
    cin>>a;
  }

  int val_needed()
  {
    return a;
  }
};

class Child : public Parent
{
  public:
    void display()
    {
      cout<<"The Value of A is "<<val_needed();
    }
};

int main()
{
  Child test;
  test.display();

  return 0;
}
