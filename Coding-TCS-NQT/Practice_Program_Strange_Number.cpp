/*
Task is to find out if the given number N is Strange number or not.

Note:-

- A strange number is an integer number N which has factors that are prime numbers.
- The square-root of the number N should be less than the greatest prime factor of N.

Example -

Input - 

15

Output -

Strange Number
*/

#include<iostream>
#include<math.h>
// #include<vector>
using namespace std;


int isNumberStrange(int num)
{
    int num_prime = 0, max_prime_num = 0, temp_num = 0;
    num_prime = 2;
    temp_num = num;

    while(num > 1)
    {
        if(num % num_prime == 0)
        {
            num = num / num_prime;
            max_prime_num = std::max(max_prime_num,num_prime);
        }
        else
        {
            num_prime++;
        }
    }

    if(sqrt(temp_num) < max_prime_num)
    {
        return 0;
    }
}

/*
int isNumberStrange(int num)
{
    vector<int> factors_prime;
    int temp = 2, flg = 0;

    //from 2 -> (num/2) -- identifying the prime factors of num
    while(temp <= (num/2))
    {
        flg = 0;
        for(int i = 2; i <= sqrt(num); i++)
        {
            if(temp == i)
            {
                continue;
            }

            if(temp % i == 0)
            {
                flg = 1;
                break;
            }
        }

        if(flg == 0 && (num % temp == 0))
        {
            factors_prime.push_back(temp);
        }

        temp++;
    }

    if(sqrt(num) < factors_prime.back())
    {
        return 0;
    }
}
*/
int main()
{
    int N = 0, flag = -1;

    cout<<"Enter the value of N :"<<endl;
    fflush(stdin);
    cin>>N;

    flag = isNumberStrange(N);

    (flag == 0) ? cout<<endl<<"Strange Number"<<endl : cout<<endl<<"Not Strange Number"<<endl;

    return 0;
}