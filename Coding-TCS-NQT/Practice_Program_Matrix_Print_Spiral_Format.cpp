/*
Input a 2D matrix, print all elements in spiral format (clockwise)

Example - 

Input - 

1 2 3
4 5 6
7 8 9

Output -

1 2 3 6 9 8 7 4 5
*/

//Approach - using four pointer approach (four varibales to manage the start row & column,end row & column)


#include<iostream>
using namespace std;


void displayElementsInSpiralFormat(int** a, int r, int c)
{
    int start_row = 0, start_col = 0, end_row = 0, end_col = 0;

    start_row = start_col = 0;
    end_row = r - 1;
    end_col = c - 1;

    while(true)
    {

        for(int x = start_col; x <= end_col ; x++)
        {
            cout<<a[start_row][x]<<" ";
        }
        start_row++;

        if(start_row > end_row)
        {
            break;
        }

        for(int x = start_row; x <= end_row; x++)
        {
            cout<<a[x][end_col]<<" ";
        }
        end_col--;

        if(start_col > end_col)
        {
            break;
        }

        for(int x = end_col; x >= start_col; x--)
        {
            cout<<a[end_row][x]<<" ";
        }
        end_row--;

        if(start_row > end_row)
        {
            break;
        }

        for(int x = end_row; x >= start_row; x--)
        {
            cout<<a[x][start_col]<<" ";
        }
        start_col++;

        if(start_col > end_col)
        {
            break;
        }
    }

}


int main()
{
    //initializing variables to store size of row and column of the 2D matrix
    int row_sze = 0, col_sze = 0;

    cout<<"Enter the dimensions of the 2D matrix (row column) :"<<endl;
    fflush(stdin);
    cin>>row_sze>>col_sze;

    //initializing the 2D array
    int** arr = new int*[row_sze];

    cout<<"Enter the values in matrix :"<<endl;
    fflush(stdin);
    for(int i = 0; i < row_sze; i++)
    {
        arr[i] = new int [col_sze];

        for(int j = 0; j < col_sze; j++)
        {
            cin>>arr[i][j];
        }
    }

    displayElementsInSpiralFormat(arr,row_sze,col_sze);

    return 0;
}