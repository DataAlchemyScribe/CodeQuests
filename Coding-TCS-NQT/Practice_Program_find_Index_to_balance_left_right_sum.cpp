/*
Given an array of integers, find an index such that the sum of elements at lower indexes is equal to the 
sum of elements at higher indexes. If no such index exist, return -1

Example -

Input - {-7, 1, 5, 2, -4, 3, 0}

Output - 3 (index)
*/

#include<iostream>
using namespace std;

int findIndex(int* A, int N)
{
    int lft_sum = 0, rgt_sum = 0;

    int* sum_left = new int [N];
    int* sum_right = new int [N];

    for(int i = 0; i < N; i++)
    {
        sum_left[i] = lft_sum;
        lft_sum += A[i];
    }

    for(int i = (N-1); i >= 0; i--)
    {
        sum_right[i] = rgt_sum;
        rgt_sum += A[i];
    }

    for(int i = 0;i < N; i++)
    {
        if(sum_left[i] == sum_right[i])
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int n = 0, idx = 0;

    //input - number of integers in array (size of array)
    cout<<"Enter the size of array :"<<endl;
    fflush(stdin);
    cin>>n;

    //input array declaration
    int* arr = new int [n];

    //input - storing values inside the array
    cout<<"Enter the value in the array :"<<endl;
    fflush(stdin);
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    idx = findIndex(arr,n);

    cout<<endl<<idx<<endl;
    return 0;
}



/* Binary Search Approach



int findSum(int* a, int l, int h)
{
    int temp_sum = 0;

    for(int i = l; i <= h; i++)
    {
        temp_sum += a[i];
    }

    return temp_sum;
}


int findIndex(int* A, int N)
{
    int low = 0, high = 0, mid = 0, lft_sum = 0, rgt_sum = 0;
    low = 0;
    high = N-1;
    mid = ((low + high) / 2);

    while((mid > low) && (mid < high))
    {
        lft_sum = findSum(A,low,mid-1);
        rgt_sum = findSum(A,mid+1,high);

        if(lft_sum == rgt_sum)
        {
            return mid;
        }
        else if(lft_sum < rgt_sum)
        {
            // mid++;
            mid = ((mid + high)/2);
        }
        else
        {
            // mid--;
            mid = ((mid + low) / 2);
        }
    }

    return -1;
}
*/