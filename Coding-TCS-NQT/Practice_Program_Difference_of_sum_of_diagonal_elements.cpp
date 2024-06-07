//given a sqaure matrix, find the absolute difference between the sum of its diagonals.

#include<iostream>
using namespace std;

int diffSumOfDiagonals(int n)
{
    int left_diagonal_sum = 0, right_diagonal_sum = 0;

    int** a = new int*[n];

    cout<<"Enter the matrix elements :"<<endl;
    for(int i = 0; i < n ; i++)
    {
        a[i] = new int [n];

        for(int j = 0; j < n ; j++)
        {
            cin>>a[i][j];
        }
    }
/*
    cout<<endl<<"Matrix"<<endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
*/
    for(int i = 0; i < n; i++)
    {
        left_diagonal_sum += a[i][i];
    }
    // cout<<endl<<"left diagonal sum = "<<left_diagonal_sum<<endl;

    for(int i = 0; i < n; i++)
    {
       right_diagonal_sum += a[i][n-(i+1)];
    }
    // cout<<endl<<"right diagonal sum = "<<right_diagonal_sum<<endl;
    
    return (abs(abs(left_diagonal_sum) - abs(right_diagonal_sum)));
}


int main()
{
    int sze_matrix = 0, diff_sum_of_diagonals = 0;

    cout<<"Enter the size of square matrix : ";
    fflush(stdin);
    cin>>sze_matrix;

    diff_sum_of_diagonals = diffSumOfDiagonals(sze_matrix);

    cout<<endl<<"Absolute difference between the sum of its diagonals : "<<diff_sum_of_diagonals<<endl;
    return 0;
}