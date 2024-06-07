//given an array arr of size n, swap the kth element from the beginning with kth element from end

#include<iostream>
using namespace std;


void swapKthElement(int* a, int sze, int x)
{
    if(x > sze)
    {
        cout<<endl<<"Swap operation cannot operate on the array!";
    }
    else
    {
        int temp = 0;
        temp = a[x - 1];
        a[x - 1] = a[sze - x];
        a[sze - x] = temp;

        cout<<endl<<"Swap operation performed successfully!\nArray : ";
        for(int i=0;i<sze;i++)
        {
            cout<<a[i]<<" ";
        }
    }
}


int main()
{
    int n = 0, k = 0;
    cout<<"Enter the size of array : ";
    fflush(stdin);
    cin>>n;

    //dynamic array intialization
    int* arr = new int[n];

    cout<<endl<<"Enter the values of array : "<<endl;
    fflush(stdin);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<endl<<"Enter the value of k (position to swap) : ";
    fflush(stdin);
    cin>>k;

    swapKthElement(arr,n,k);

    return 0;
}