// Given an array arr[] of size N, the task is to count the number of array elements such that all the elements to its 
// left are strictly smaller than it.

// Note: The first element of the array will be considered to be always satisfying the condition.

// Example: 
// Input: arr[] = {2,4,5,6} Output: 4
// Input: arr[] = {3,3,3,3,3,3} Output: 1

#include<iostream>
using namespace std;

int CountNumberOfElementsExistOnLeftSmallerThan(int a[], int n)
{
    int count=1;

    for(int i=0;i<n;i++)
    {
        if(a[i]<a[i+1])
        {
            count++;
        }
        else
        {
            break;
        }
    }
    return count;
}

int main()
{
    int sze = 4, res=0;
    int arr[4] = {2,4,5,6};
    int s=6, anum[6] = {3,3,3,3,3,3};
    res = CountNumberOfElementsExistOnLeftSmallerThan(arr, sze);
    cout<<res<<endl;
    res = CountNumberOfElementsExistOnLeftSmallerThan(anum, s);
    cout<<res<<endl;
    return 0;
}