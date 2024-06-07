/*
Given n non-negative integers representing an elevation map where the width of each bar is 1. Compute how much water it can trap after raining.

Input -

first line - takes value of N (represents number of bars each width 1)
second line - take N non-negative integers (represents height of each bar)

Output -

Total number of blocks where water can trap after rain

Example - 

Input -

12
0 1 0 2 1 0 1 3 2 1 2 1


Output -
6
*/

#include<iostream>
using namespace std;


int calculateWaterTrapBlocks(int* bar, int n)
{
    //array to store maximum height of letf block/bar from current position
    int* max_left_height = new int [n];

    //array to store maximum height of right block/bar from current position
    int* max_right_height = new int [n];

    //waterTrapBlocks - store number of blocks trapped by water after rain
    //left_max_hgt and right_max_hgt variables are used to compare the maximum height of block/bar, left and right respectively, to store it in above arrays
    int waterTrapBlocks = 0, left_max_hgt = 0, right_max_hgt = 0;

    for(int i = 0; i < n ; i++)
    {
        left_max_hgt = std::max(bar[i], left_max_hgt);
        max_left_height[i] = left_max_hgt;
    }

    for(int i = n-1; i >= 0; i--)
    {
        right_max_hgt = std::max(bar[i],right_max_hgt);
        max_right_height[i] = right_max_hgt;
    }

    for(int i = 0; i < n; i++)
    {
        waterTrapBlocks += std::min(max_left_height[i],max_right_height[i]) - bar[i];
    }

    return waterTrapBlocks;
}


int main()
{
    int N = 0, num_blocks_trap_water = 0;

    //first input - total number of blocks/bars
    cout<<"Enter the value of N :"<<endl;
    fflush(stdin);
    cin>>N;

    //initialzing array to store the N-values representing height of each block/bar
    int* building_block = new int [N];

    //second input - N number of values represent height of each block/bar
    cout<<"Enter the "<<N<<" non-negative integer values:"<<endl;
    fflush(stdin);
    for(int i = 0; i < N; i++)
    {
        cin>>building_block[i];
    }

    num_blocks_trap_water = calculateWaterTrapBlocks(building_block, N);

    cout<<endl<<num_blocks_trap_water<<endl;
    return 0;
}