// Given an integer n, for every integer i from 1 to n (inclusive), the task is to print:

// “FizzBuzz” if i is divisible by both 3 and 5,
// “Fizz” if i is divisible by 3,
// “Buzz” if i is divisible by 5,
// or i (as a string) if none of the conditions are true.

#include<iostream>
using namespace std;

int main()
{
    int last_num=0,i=0;

    cout<<"Enter the value of n : ";
    fflush(stdin);
    cin>>last_num;

    for(i=1;i<=last_num;i++)
    {
        if(i % 15 == 0)
        {
            cout<<"FizzBuzz\n";
        }
        else if(i % 3 == 0)
        {
            cout<<"Fizz\n";
        }
        else if(i % 5 == 0)
        {
            cout<<"Buzz\n";
        }
        else{
            cout<<i<<"\n";
        }

        // cout<<" ";3022
    }
    return 0;
}