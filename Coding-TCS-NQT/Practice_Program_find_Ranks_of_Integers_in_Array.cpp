/*
Given array of N integers, task is to replace elements with its rank in the array.

Example 1 -

Input -

6 (size of array)
20 15 26 2 98 6 (values in array)

Output -

4 3 5 1 6 2

Example 2 -

Input -

7
1 5 8 15 8 25 9

Output -
1 2 3 5 3 6 4

*/

#include<iostream>
#include<algorithm>
#include<unordered_map>
using namespace std;

void replaceElementsWithRank(int* A, int N)
{
    int rank = 1;

    //unordered map -- hash table approach (key-value --> element-rank)
    unordered_map<int,int> element_Rank;

    //duplicate array to sort the values to identify the rank
    int* arr_sort = new int [N];

    for(int i = 0; i < N; i++)
    {
        arr_sort[i] = A[i];
    }

    //sorting the array in ascending order
    sort(arr_sort, arr_sort + N);

    for(int i = 0; i < N; i++)
    {
        if(!element_Rank.count(arr_sort[i]))
        {
            element_Rank[arr_sort[i]] = rank;
            rank++;            
        }
    }

    for(int i = 0; i < N; i++)
    {
        A[i] = element_Rank[A[i]];
    }
}

int main()
{
    int n = 0;

    cout<<"Enter the size of array :"<<endl;
    fflush(stdin);
    cin>>n;

    int* original_arr = new int [n];

    cout<<"Enter the values in array :"<<endl;
    fflush(stdin);
    for(int i = 0; i < n; i++)
    {
        cin>>original_arr[i];
    }

    replaceElementsWithRank(original_arr,n);

    cout<<endl;
    for(int i = 0; i < n; i++)
    {
        cout<<original_arr[i]<<" ";
    }

    return 0;
}