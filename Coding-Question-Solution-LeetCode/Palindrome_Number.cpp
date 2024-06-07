// Write a function that takes an integer as input and returns true if the integer is a palindrome, and false otherwise.
#include<iostream>
using namespace std;

bool Check_Palindrome(int n)
{
    int temp=0,div=0,rev=0;
    bool result;
    temp = n;
    while(n>0)
    {
        div = n % 10;
        rev = (rev * 10) + div;
        n = n / 10;
    }

    result = (temp == rev) ? true : false;

    return result;
}

int main()
{
    int num = 0;
    bool var;
    char ch;
    do
    {
        cout<<"Enter a number : ";
        fflush(stdin);
        cin>>num;
        if(num < 0)
        {
            cout<<num<<" is not Palindrome.";
        }
        else
        {
            var = Check_Palindrome(num);

            if(var) { cout<<num<<" is a Palindrome."; }
            else { cout<<num<<" is not a Palindrome."; }
        }
        cout<<endl<<"Do you want to check for another number (Y/N) : ";
        fflush(stdin);
        cin>>ch;
    } while (ch == 'Y' || ch == 'y');
    return 0;
}