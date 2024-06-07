/*
Input

- first line contains an integer N, which determines the height of network marketing tree
- second line contains an integer M, which denoted the profit earned by a particular individual at Nth Level
- third line contains an integer P, which denotes profit % that needs to be passed on to supervisor. Each supervisor will always get 
an integer amount of the profit (rounded to be nearest integer) from his subordinate.

Output

The profit earned by the person at the root of the network marketing tree coming from a particular individual at Nth level in the tree,
rounded off to the nearest integer.
************************************
input

N - 3
M - 100
P - 10

output

1

*/

#include<iostream>
#include<cmath>
using namespace std;

long int evaluateProfitEarnByRootNode(int n, int m, int p)
{
    int i = n;
    long int p_earn = 0;
    while(i > 1)
    {
        p_earn = round(((m*p)/100));
        i--;
        m = p_earn;    
    }
    return p_earn;
}

int main()
{
    int N = 0, M = 0, P = 0;
    long int profit_earn_by_root = 0;

    cout<<"Enter the inputs (N,M,P) :"<<endl;
    fflush(stdin);
    cin>>N>>M>>P;   

    profit_earn_by_root = evaluateProfitEarnByRootNode(N,M,P);

    cout<<endl<<profit_earn_by_root<<endl;

    return 0;
}