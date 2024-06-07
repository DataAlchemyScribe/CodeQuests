//given a number n. Find if the sum of digits of n is a palindrome number or not.

#include<iostream>
using namespace std;

//evaluate the sum of digits of number N
int evaluateSumOfDigits(int x)
{
    int add = 0, r = 0;
    while(x)
    {
        r = x % 10;
        add = add + r; //add += r
        x = x / 10; // x /= 10
    }
    return add;
}

//verify if sum of digits of N is palindrome number or not
int isSumOfDigitsPalindrome(int n)
{
    int sum = 0, temp = 0, rem = 0, rev = 0;
    sum = evaluateSumOfDigits(n);
    temp = sum;
    while(temp)
    {
        rem = temp % 10;
        rev = (rev * 10) + rem;
        temp = temp / 10;
    }
    if(sum == rev)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int num = 0, res = -1;
    cout<<"Enter a number : ";
    fflush(stdin);
    cin>>num;
    res = isSumOfDigitsPalindrome(num);
    cout<<endl<<res<<endl;
    return 0;
}