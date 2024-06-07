//Aim - Calculate the sum of cube of integers from a range of n to m (including n and m), 
//n - smallest (start), m - largest (end)

#include<iostream>
// #include<math.h>
using namespace std;

int SumOfCubes(int x,int y)
{
    int sum = 0;

    for(int i = x; i <= y; i++)
    {
        sum = sum + (i*i*i);
        // sum = sum + pow(i,3);
    }

    return sum;
}

int main()
{
    int N=0,M=0;
    cout<<"Enter start and end points of range : ";
    fflush(stdin);
    cin>>N>>M;
    cout<<endl<<"Sum of Cubes of intgers from a range : "<<SumOfCubes(N,M);
    return 0;
}
