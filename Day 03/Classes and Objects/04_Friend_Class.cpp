#include<iostream>
using namespace std;

class Friend_Demo; // Forward Declaraation

class Test_Private
{
  friend class Friend_Demo;
  private:
    int age;
    char name[100];

    void set_details()
    {
      cout<<"Enter the Name : ";  cin>>name;
      cout<<"Enter the Age : ";   cin>>age;
    }

    void get_details()
    {
      cout<<endl<<"Name : "<<name<<endl<<"Age : "<<age;
    }
};

class Friend_Demo
{
  public:
    void set_get_details(Test_Private &test)
    {
      test.set_details();
      test.get_details();
      // Accessing private or protected elements through an object.
    }
};

int main()
{
  Test_Private t0;
  Friend_Demo t1;
  t1.set_get_details(t0);

  return 0;

}
