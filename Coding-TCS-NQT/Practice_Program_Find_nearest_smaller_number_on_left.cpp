/*
given an array of integers, find the nearest smaller number for every element such that the smaller element is on the left side.

Example 1 -

Input - {1,6,4,10,2,5}

Output - {-1,1,1,4,1,2}

Example 2 -

Input - {3,2,1}

Output - {-1,-1,-1}

*/

#include<iostream>
#include<stack>
using namespace std;

void findNearestSmallerNumberOnLeft(int* A, int N)
{
    //output array - finding nearest smaller number on left of each value
    int* opt_arr = new int [N];

    //stack is used in-order to manage the numbers, apprearing smaller on left
    stack<int> arr;

    //pushing the first value (zeroth index value) into the stack
    arr.push(A[0]);
    
    //assuming - for first value (zeroth index value) nearest smaller number will be -1
    opt_arr[0] = -1;

    for(int i = 1; i < N; i++)
    {
        recheck_label:
            if(arr.empty())
            {
                opt_arr[i] = -1;
                arr.push(A[i]);
            }
            else if(A[i] > arr.top())
            {
                opt_arr[i] = arr.top();
                arr.push(A[i]);
            }
            else
            {
                arr.pop();
                goto recheck_label;
            }
    }


    cout<<"Output Array :"<<endl;
    for(int i = 0; i < N; i++)
    {
        if(i == (N-1))
        {
            cout<<opt_arr[i];
            break;
        }
        cout<<opt_arr[i]<<" ";        
    }
}

int main()
{
    int n = 0;

    //size of input array
    cout<<"Enter the size of input array :"<<endl;
    fflush(stdin);
    cin>>n;

    //input array - values entered by user
    int* ipt_arr = new int [n];
    cout<<"Enter the values in the array :"<<endl;
    fflush(stdin);
    for(int i = 0; i < n; i++)
    {
        cin>>ipt_arr[i];
    }

    findNearestSmallerNumberOnLeft(ipt_arr,n);

    return 0;
}