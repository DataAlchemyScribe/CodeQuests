//given an integer N, reverse the digit of given number N

#include<iostream>
using namespace std;

int reverseNumber(int n)
{
    int r = 0, rev = 0, temp = 0;
    temp = n;
    while(temp)
    {
        r = temp % 10;
        rev = (rev*10) + r;
        temp = temp / 10;
    }

    /*
    //verify if N is palindrome or not
    if(n == rev)
    {
        cout<<endl<<n<<" is palindrome number."<<endl;
    }
    else
    {
        cout<<endl<<n<<" is not palindrome number."<<endl;
    }
    */
    return rev;
}

int main()
{
    int num = 0, rev_num = 0;
    cout<<"Enter a number : ";
    fflush(stdin);
    cin>>num;
    rev_num = reverseNumber(num);
    cout<<rev_num<<endl;
    return 0;
}