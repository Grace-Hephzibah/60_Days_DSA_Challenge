#include <iostream>

// EASY-BASICS

// Model 1
void hello_world()
{
    printf("Hello World");
}
/*
Time Complexity: O(1)
Space Complexity: O(1)
*/

// Model 2
int sum_of_N_numbers(int a)
{
    int sum = 0;
    for(int i=1; i<=a; i++) sum += i;
    return sum;
}
/*
Time Complexity: O(n)
Space Complexity: O(1)
*/

// Model 3
int decreasing_halves(int a)
{
    int sum = 0;
    for(int i=a; i>=1; i=i/2) cout<<i<<" ";
}
/*
Time Complexity: O(log n) -> log n (base 2)
Space Complexity: O(1)
*/

// Model 4
int possible_natural_pairs(int a)
{
    for(int i=1; i<=a; i++)
      for(int j=1; j<=a; j++)
        cout<<"("<<i<<","<<j<<")"<<endl;
}
/*
Time Complexity: O(n^2)
Space Complexity: O(1)
*/

// MEDIUM-LET'S THINK

// Model 1
void non_repeating_pairs(int a)
{
    for(int i=1; i<=a; i++)
      for(int j=i; j<=a; j++)
        cout<<"("<<i<<","<<j<<")"<<endl;

}
/*
Time Complexity: O(n^2)
Space Complexity: O(1)
*/

// Model 2
void unique_magical_pairs(int a)
{
    for(int i=1; i<=a; i++)
      for(int j=a; j>0; j=j/2)
        cout<<"("<<i<<","<<j<<")"<<endl;

}
/*
Time Complexity: O(nlog n)
Space Complexity: O(1)
*/

// Model 3
int mixture_pairs(int a)
{
    for(int i=0; i<5; i++)
      non_repeating_pairs(); //->per cycle O(n^2)

    for(int i=0; i<3; i++)
      unique_magical_pairs(); //->per cycle O(nlog n)

}
/*
Time Complexity: O(5n^2 + 3nlog n) = O(n^2)
Space Complexity: O(1)
*/
