#include<iostream>
using namespace std;

void default_arguments(char *name, int age = 18, char gender = 'F')
{
  // Default arguments trail at last
  cout<<name<<" "<<age<<" "<<gender<<endl;
}

void const_argument(int const &x)
{
  //x = x+10; ->throws error
  cout<<x;
}

int main()
{
  default_arguments("Sammy");
  default_arguments("Beulah", 20);
  default_arguments("Sam", 31, 'M');

  //default_arguments("Joseph",,'M'); ->not possible to skip arguments

  int a = 10;
  const_argument(a);
}
