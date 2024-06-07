/* Given an array of integers nums, there is a sliding window of size k which is moving from the very left of the array 
to the very right. You can see the k numbers in the window. Each time the sliding window moves right by one position. */

#include<iostream>
using namespace std;

//Brute Force Method
void Sliding_Window_Max_Return(int n[],int s,int win_sze)
{
    int max = 0;
    for(int i=0;i<(s - win_sze + 1);i++)
    {
        max = n[i];
        for(int j=0;j<win_sze;j++)
        {
            if(max < n[i+j])
            {
                max = n[i+j];
            }
        }
        cout<<max<<" ";
    }
}


int main()
{
    int sze = 8, nums[sze] = {1,3,-1,-3,5,3,6,7}, k = 3;
    cout<<"Maxs vales in the array [ ";
    for(int i=0;i<sze;i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<"] with a sliding window of size "<<k<< " are : "<<endl;
    Sliding_Window_Max_Return(nums,8,k);
    return 0;
}