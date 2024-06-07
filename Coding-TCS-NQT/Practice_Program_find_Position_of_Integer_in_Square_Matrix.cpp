/*
Given an n x n matrix and an integer x, find the position of x in the matrix if it is present. Otherwise, print "Element not found".

Every row and column of the matrix is sorted in increasing order. The designed algorithm should have linear time complexity.

Example -

Input -

//n
4

//n x n matrix
{ {10 20 30 40 },
 {15 25 35 45 },
 {27 29 37 48 },
 {32 33 39 50 } }

//x
29

Output -

Found at (2,1)
*/

#include<iostream>
using namespace std;

// void findElementPosition(int** A, int N, int ele)
// {
//     int row_ele = -1, col_ele = 0;  
    
//     //finding row in which the element might exist.
//     //checking first element for each row in first column 
//     //to find such element whose value is greater than x
//     for(int i = 0; i < N; i++)
//     {
//         if(A[i][col_ele] > ele)
//         {
//             row_ele = i - 1;
//             break;
//         }
//     }

//     if(row_ele < 0)
//     {
//         cout<<endl<<"Element "<<ele<<" not found !";
//     }
//     else
//     {
//         int low = 0, high = 0;
//         low = 0;
//         high = N - 1;

//         while(low < high)
//         {
//             col_ele = ((low + high) / 2);

//             if(A[row_ele][col_ele] == ele)
//             {
//                 cout<<endl<<"Element "<<ele<<" found at ("<<row_ele<<","<<col_ele<<")";
//             }
//             else if(A[row_ele][col_ele] > ele)
//             {
//                 high = col_ele - 1;
//             }
//             else
//             {
//                 low = col_ele + 1;
//             }
//         }

//     }
// }


void findElementPosition(int** A, int N, int ele)
{
    int i = 0, j = 0;
    i = 0;
    j = N - 1;

    //another condition -> i != N && j != 0
    while(i < N && j >= 0)
    {
        if(A[i][j] == ele)
        {
            cout<<endl<<"Element "<<ele<<" found at ("<<i<<","<<j<<")"<<endl;
            break;
        }
        else if(A[i][j] > ele)
        {
            j--;
        }
        else
        {
            i++;
        }
    }

    if(i == N || j == 0)
    {
        cout<<endl<<"Element "<<ele<<" not found."<<endl;
    }

}

int main()
{
    int n = 0, x = 0;

    //input - size of array (n)
    cout<<"Enter the size of square matrix (n) :"<<endl;
    fflush(stdin);
    cin>>n;

    //2D array declaration
    int** arr = new int*[n];

    //input - storing values in 2D array
    cout<<"Enter the values in array :"<<endl;
    fflush(stdin);
    for(int i = 0; i < n; i++)
    {
        arr[i] = new int [n];

        for(int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<endl<<"Enter the element to find (x) :"<<endl;
    fflush(stdin);
    cin>>x;

    fflush(stdin);
    findElementPosition(arr,n,x);
    
    return 0;
}