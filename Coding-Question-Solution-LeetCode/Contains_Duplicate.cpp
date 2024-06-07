//Given an integer array, retun true if any value appears at least twice in the array and return false if every element is distinct.
//Brute Force Solution
//Quick Sort Solution
//Hashing Solution

//Brute Force Solution Here

/*
#include<iostream>
using namespace std;

bool Check_Duplicates_Using_BruteForce(int n[],int sze)
{
    bool var=false;
    for(int i=0;i<(sze - 1);i++)
    {
        for(int j=i+1;j<sze;j++)
        {
            if(n[i] == n[j])
            {
                var = true;
                return var;
            }
        }
    }
    return var;
}

int main()
{
    int nums[4] = {1,2,3,1};
    bool res = false;
    cout<<endl<<res;
    res = Check_Duplicates_Using_BruteForce(nums,4);
    cout<<endl<<res;
    return 0;
}

*/


//Hashing Solution Here
#include<iostream>
using namespace std;

bool Check_Duplicates_Using_Hashing(int n[],int sze)
{
    int s = sze;
    int h_tab[s][2] = {0};
    int h = 0;
    for(int i=0;i<sze;i++)
    {
        for(int j=0;j<=h;j++)
        {
            if(h_tab[j][0] == n[i])
            {
                h_tab[j][1] += 1;
                return true;
            }
        }

        h_tab[h][0] = n[i];
        h_tab[h][1] += 1;
        h++;
    }
    return false;
}

int main()
{
    int nums[10] = {1,2,3,4,5,1,2,3,4,5};
    int arrt[5] = {5,4,1,2,5};
    int gg[7] = {1,2,3,4,5,6,7};
    bool res = false;
    cout<<endl<<res;
    res = Check_Duplicates_Using_Hashing(nums,10);
    cout<<endl<<"Test 1 --> "<<res;
    res = Check_Duplicates_Using_Hashing(arrt,5);
    cout<<endl<<"Test 2 --> "<<res;
    res = Check_Duplicates_Using_Hashing(gg,7);
    cout<<endl<<"Test 3 --> "<<res;
    return 0;
}