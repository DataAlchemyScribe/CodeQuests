/* Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i] */

#include<iostream>
using namespace std;

void Product_of_Array_Except_Itself(int n[],int s)
{
    int ans[s] = {0}, left[s] = {0}, right[s] = {0};
    left[0] = right[s-1] = 1;
    for(int i=1;i<s;i++)
    {
        left[i] = left[i-1] * n[i-1];
    }
    for(int j=s-2;j>-1;j--)
    {
        right[j] = right[j+1] * n[j+1];
    }
    cout<<"answer array : [ ";
    for(int k=0; k<s; k++)
    {
        ans[k] = left[k] * right[k];
        cout<<ans[k]<<" ";
    }
    cout<<"]";
}

int main()
{
    int sze = 4, s_arr = 5, nums[sze] = {1,2,3,4}, arr[s_arr] = {-1,1,0,-3,3};
    Product_of_Array_Except_Itself(nums,sze);
    cout<<endl;
    Product_of_Array_Except_Itself(arr,s_arr);
    return 0;
}