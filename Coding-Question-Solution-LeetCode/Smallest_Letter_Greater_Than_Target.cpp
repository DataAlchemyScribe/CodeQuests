/* You are given an array of characters letters that is sorted in non-decreasing order, and a character target. There are at least two 
different characters in letters.

Return the smallest character in letters that is lexicographically greater than target. If such a character does not exist, 
return the first character in letters. */

#include<iostream>
using namespace std;


char Next_Greatest_Letter_than_Target(char l[], int n, char t)
{
    int flag = 0;

    for(int i=0;i<n;i++)
    {
        if(t<l[i])
        {
            flag = 1;
            return l[i];
            break;
        }
    }

    if(flag == 0)
    {
        return l[0];
    }
}
    //try mixing binay search and brute force method to optimize
    // int low=0,mid=0,high=0;


    // low = 0;
    // high = n;

    // while(low<high)
    // {
    //     mid = (low + high) / 2;

    //     if(l[mid] ==  t)
    //     {
    //         return l[mid+1];
    //     }
    //     else if(l[mid] < t)
    //     {
    //         low = mid;
    //     }
    //     else
    //     {
    //         high = mid;
    //     }
    // }



int main()
{
    int sze = 3;
    char letters[sze] = {'c','f','j'}, target = 'c', greater_than_target;

    greater_than_target = Next_Greatest_Letter_than_Target(letters,sze,target);
    cout<<greater_than_target<<endl;

    return 0;
}