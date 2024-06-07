// A chocolate factory is packing chocolates into packets represented by an array arr[] of size N. 
// The task is to rearrange the array such that all the empty packets (0) are pushed to the end of the conveyor belt, 
// while maintaining the order of the non-empty packets.

// Example:

// Input: N=5, arr[]={1,2,0,4,0}
// Output: {1,2,4,0,0}

// Input: N=7, arr[]={4,5,0,1,0,0,5}
// Output: {4,5,1,5,0,0,0}

#include<iostream>
#include<vector>
using namespace std;

// void RearrangePackets(int a[], int n)
// {
//     int count=0;

//     for(int i=0;i<n;i++)
//     {
//         if(a[i] == 0 || count > 0)
//         {
//             if(a[i+1] != 0 || i == n-1)
//             {
//                 if(count == 0)
//                 {
//                     a[i] = a[i+1];
//                     a[i+1] = 0;
//                 }
//                 else
//                 {
//                     a[i] = a[i-count+1];
//                     a[i-count+1] = 0;
//                 }
//             }
//             else
//             {
//                 count++;
//             }
//         }
//     }

//     cout<<"[ ";
//     for(int i=0;i<n;i++)
//     {
//         if(i == n-1)
//         {
//             cout<<a[i];
//         }
//         else
//         {
//             cout<<a[i]<<" , ";
//         }
//     }
//     cout<<"]";
// }

// void RearrangePackets(int a[], int n)
// {
//     int temp[n]={0};
//     int pos=0;
//     for(int i=0;i<n;i++)
//     {
//         if(a[i] > 0)
//         {
//             temp[pos] = a[i];
//             // pos = i+1;
//             pos++;
//         }
//     }

//     cout<<"[ ";
//     for(int j=0;j<n;j++)
//     {
//         if( j == n-1)
//         {
//             cout<<temp[j];
//         }
//         else
//         {
//             cout<<temp[j]<<" , ";
//         }
//     }
//     cout<<"]";

// } 

void RearrangePackets(int a[], int n)
{
    vector<int>res;

    for(int i=0;i<n;i++)
    {
        if(a[i] != 0)
        {
            res.push_back(a[i]);
        }
    }
    
    int numZeros = n - res.size();

    for(int j=0;j<numZeros;j++)
    {
        res.push_back(0);
    }

    cout<<"[ ";
    for(int i=0;i<n;i++)
    {
        if( i == n-1)
        {
            cout<<res[i];
        }
        else
        {
            cout<<res[i]<<" , ";
        }
    }
    cout<<"]";

}

int main()
{
    int arr[5] = {1,2,0,4,0};
    RearrangePackets(arr, 5);
    cout<<endl<<endl;
    int anum[7] = {4,5,0,1,0,0,5};
    RearrangePackets(anum, 7);
    return 0;
}