#include<iostream>
using namespace std;

class Test
{
  private: // default one
    int age;
    char name[100];
    // private elements cannot be inherited or accessed outside
    // attributes are usually private

  public:
    void set_details()
    {
      cout<<"Enter the Name : ";
      cin>>name;
      cout<<"Enter the Age : ";
      cin>>age;
    }

    void get_details()
    {
      cout<<endl<<"Name : "<<name<<endl<<"Age : "<<age;
    }
};

int main()
{
  Test t1; // Instantiation

  // Methods are usually declared public and they will handle the private attributes of the class
  t1.set_details();
  t1.get_details();

  return 0;

}
