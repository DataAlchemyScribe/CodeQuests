//given a 3 digit number, identify whether it is armstrong number or not.

#include<iostream>
using namespace std;

string IsArmstrongOrNot(int n)
{
    int temp = 0, sum = 0, r = 0, d = 0;
    temp = n;

    while(temp)
    {
        r = temp % 10;
        sum = sum + (r*r*r);
        temp = temp / 10;
    }

    if(sum == n)
    {
        return "YES";
    }
    else
    {
        return "NO";
    }

}

int main()
{
    int num = 0;
    string result = "";
    cout<<"Enter the 3 digit number : ";
    fflush(stdin);
    cin>>num;
    result = IsArmstrongOrNot(num);
    cout<<'"'<<result<<'"'<<endl;
    return 0;
}