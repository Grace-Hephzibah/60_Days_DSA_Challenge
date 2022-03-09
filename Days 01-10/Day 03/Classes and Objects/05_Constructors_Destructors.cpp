#include<iostream>
using namespace std;

class Test
{
  private:
    int age;
    char name[100];

  public:
    Test() //void set_details()
    {
      cout<<"Enter the Name : ";
      cin>>name;
      cout<<"Enter the Age : ";
      cin>>age;
    }
    ~Test() // void get_details()
    {
      cout<<endl<<"Name : "<<name<<endl<<"Age : "<<age;
    }
};

int main()
{
  Test t1; // Instantiation
  return 0;

}
