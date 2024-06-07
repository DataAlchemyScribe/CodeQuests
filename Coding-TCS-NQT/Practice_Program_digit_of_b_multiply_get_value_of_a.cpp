/*
WAP to find smallest integer values b for a given value of a. If we multiply the digits of b, we should get exact value of a. Result b must contain more than one digit.

Example:

input : a -> 10
output : b -> 25

input : a -> 100
output : b -> 455
*/

#include<iostream>
#include<vector>
using namespace std;

int evaluateIntegerbFora(int a)
{
    //basecase for values samller than 10
    if(a < 10)
    {
        return (a+10);
    }

    int i = 9, val = 0;
    vector<int>b;
    while(i > 1 && a != 1)
    {
        recheck:
            if((a % i) == 0)
            {
                b.push_back(i);
                a = a / i;
                goto recheck;
            }
        i--;
    }

    if(a != 1)
    {
        return -1;
    }

    for(auto it = b.rbegin(); it != b.rend(); it++)
    {
        val = (val*10) + *it;
    }

    return val;
}

int main()
{
    int num = 0, res_value = 0;
    
    cout<<"Enter the value : ";
    fflush(stdin);
    cin>>num;

    res_value = evaluateIntegerbFora(num);

    cout<<endl<<res_value<<endl;

    return 0;
}