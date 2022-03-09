#include<iostream>
using namespace std;

class Dummy_Demo
{
  public:
    void hi()
    {
       cout<<"HI!"<<endl;
     }
    // No explicit constructor
    // So, this class has dummy constructor
};

class Constructor_Demo
{
  int x;
  public:
    Constructor_Demo()
    {
      x = 5;
      cout<<"I am the Default Constructor. My attribute x = "<<x<<endl;
    }

    Constructor_Demo(int val)
    {
      x = val;
      cout<<"I am the Parameterized Constructor. My attribute x = "<<x<<endl;
    }

    Constructor_Demo(Constructor_Demo &test)
    {
      cout<<"I am the Copy Constructor. My attribute x = "<<test.x<<endl;
    }
};

// Default value is allowed
// Overloading is shown

int main()
{
  Dummy_Demo d;
  d.hi();

  Constructor_Demo t1;
  Constructor_Demo t2(900);
  Constructor_Demo t3(t2);

  return 0;

}
