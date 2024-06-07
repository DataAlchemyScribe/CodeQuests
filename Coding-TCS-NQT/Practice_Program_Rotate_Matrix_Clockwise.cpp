/*
given a square 2D matrix representing an image, rotate the image by 90 degrees (clockwise)

note: rotate the image in place (modify the input 2D matrix directly, do not allocate another 2D matrix and do the rotation)


Example - 

Input -

1 2 3
4 5 6
7 8 9

Output -

7 4 1
8 5 2
9 6 3
*/

//Approach --> Transpose the matrix and Reverse each row

#include<iostream>
using namespace std;

void rotateMatrixClockwise(int** a, int n)
{
    //Transposing the 2D Matrix
    for(int i = 0; i < n; i++)
    {
        int temp = 0;
        for(int j = i + 1 ; j < n; j++)
        {
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }

    /*
    //display the transpose matrix
    cout<<endl;
    for(int x = 0; x < n; x++)
    {
        for(int y = 0; y < n; y++)
        {
            cout<<a[x][y]<<" ";
        }
        cout<<endl;
    }
    */
    
    //Reversing each row
    for(int i = 0; i < n; i++)
    {
        int lft_idx = 0, rgt_idx = 0;
        lft_idx = 0;
        rgt_idx = n - 1;

        //using two pointer approach to reverse the rows
        while(lft_idx < rgt_idx)
        {
            int temp = 0;
            temp = a[i][lft_idx];
            a[i][lft_idx] = a[i][rgt_idx];
            a[i][rgt_idx] = temp;

            lft_idx++;
            rgt_idx--;
        }
    }

    cout<<endl;
    //Displaying Clockwise Rotated Array
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

}

int main()
{
    int sze_matrix = 0;

    cout<<"Enter the size of 2D sqaure matrix : ";
    fflush(stdin);
    cin>>sze_matrix;

    //dynamic array initialization of size - sze_matrix * sze_matrix
    int** arr = new int*[sze_matrix];

    cout<<"Enter the values into the 2D array :"<<endl;
    fflush(stdin);
    for(int i = 0; i < sze_matrix; i++)
    {
        arr[i] = new int [sze_matrix];

        for(int j = 0; j < sze_matrix; j++)
        {
            cin>>arr[i][j];
        }
    }

    fflush(stdin);
    cout<<endl<<endl;
    fflush(stdin);
    rotateMatrixClockwise(arr,sze_matrix);
    return 0;
}