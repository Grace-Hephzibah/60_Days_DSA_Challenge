#include<iostream>
using namespace std;

int main()
{
  int a = 10; // default storage class is auto
  //auto int a = 10
  // Both are same

  // Register Storage Class
  register int x; // Cannot use &
  // Quick Access

  // Extern Storage Class
  extern int e;
  // Variable made visible to all program file

  // Static Storage Class
  static int s = 100;
  // Globally made available
  // Default for global scope

  return 0;
}
