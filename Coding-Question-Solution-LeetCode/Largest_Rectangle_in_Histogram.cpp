/* Given an array of integers heights representing the histogram's bar height where the width of each bar is 1, 
return the area of the largest rectangle in the histogram. */

/* Input: heights = [2,1,5,6,2,3]
Output: 10 */

#include<iostream>
using namespace std;

int Largest_Rectangle_in_Histogram(int h[],int n)
{
    int lfp=0,rtp=0,rect_area=0,max_rect_area=0;

    // lfp = h[0];
    // rtp = h[n-1];

    // for(int i=0;i<n;i++)
    // {
    //     lfp = h[i]; 

    //     for(int j=n;j>=0;j--)
    //     {
    //         rect_area = (lfp < rtp) ? lfp * (j-i+1) : rtp * (j-i+1);

    //         if(rect_area > max_rect_area)
    //         {
    //             max_rect_area = rect_area;
    //         }
    //     }
    // }

    // return max_rect_area;
}

int main()
{
    int sze = 6, heights[sze] = {2,1,5,6,2,3}, large_rect_area = 0;
    large_rect_area = Largest_Rectangle_in_Histogram(heights,sze);
    cout<<large_rect_area<<endl;
    return 0;
}