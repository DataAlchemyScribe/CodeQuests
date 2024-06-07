/* You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store */

#include<iostream>
using namespace std;


int Max_Amount_of_Water_Container_Store(int h[], int n)
{
    int lf=0, rf=0, storage_water = 0, max_amt = 0;

    lf = h[0];
    rf = h[n-1];
    
    for(int i=0;i<n;i++)
    {
        lf = h[i];

        for(int j=n;j>=i;j--)
        {
            storage_water = (lf<rf) ? lf * (j-i-1) : rf * (j-i-1);

            if(storage_water > max_amt)
            {
                max_amt = storage_water;
            }
        }
    }
    return max_amt;
}




int main()
{

    // Input: height = [1,8,6,2,5,4,8,3,7]
    // Output: 49
    int sze = 9, height[sze] = {1,8,6,2,5,4,8,3,7} , max_water_store = 0;
    //Input: height = [1,1]
    //Output: 1
    int he[2] = {1,1};
    max_water_store = Max_Amount_of_Water_Container_Store(height,sze);
    cout<<endl<<max_water_store;
    max_water_store = Max_Amount_of_Water_Container_Store(he,2);
    cout<<endl<<max_water_store;
    return 0;
}