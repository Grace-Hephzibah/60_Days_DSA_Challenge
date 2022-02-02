#include<iostream>
using namespace std;

inline int max2(int a, int b)
{
  return (a>b ? a : b);
}

int main()
{
  cout<<max2(5,4); // brings the code here
  // So there is no time waste in control to be moved from here to the function
  // Not suitable for big codes

}
