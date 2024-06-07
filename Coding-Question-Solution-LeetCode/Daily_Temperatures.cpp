/* Given an array of integers temperatures represents the daily temperatures, return an array answer such that answer[i] 
is the number of days you have to wait after the ith day to get a warmer temperature. If there is no future day for which this is 
possible, keep answer[i] == 0 instead. */

#include<iostream>
using namespace std;


void Days_To_wait_for_warmer_Temperature(int temp[],int s)
{
    int answers[s] = {0};
    for(int i=0;i<(s-1);i++)
    {
        for(int j=(i+1);j<s;j++)
        {
            if(temp[i] < temp[j])
            {
                answers[i] = j - i;
                break;
            }
        }
    }
    cout<<endl<<"Answer Array : [";
    for(int i=0;i<s;i++)
    {
        cout<<" "<<answers[i];
    }
    cout<<" ]";
}

int main()
{
    int sze = 8, temperatures[sze] = {73,74,75,71,69,72,76,73};
    // int s_t = 4, tempe[s_t] = {30,40,50,60};
    Days_To_wait_for_warmer_Temperature(temperatures,sze);
    // Days_To_wait_for_warmer_Temperature(tempe,s_t);
    return 0;
}