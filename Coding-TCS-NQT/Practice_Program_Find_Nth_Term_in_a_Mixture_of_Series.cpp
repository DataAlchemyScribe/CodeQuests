/*
Consider the following series: 1,1,2,3,4,7,8,15,9,24,16,40,32,72,104,27,...

This series is a mixture of 3 series:-
	- All the prime position values are power of 2.
	- All the perfect square position are power of 3.
	- Remaining positions are sum of previous 2 values.

(Input - Take the value of N)
(Output - Print out the Nth term)

Example,

Input -
N = 15

Output -
104

Constrains: N will not exceed 40
*/

#include<iostream>
#include<math.h>
using namespace std;

//funtion to verify is ith (val) poition a prime or not
bool isPrime(int val)
{
    if(val == 1)
    {
        return false;
    }

    for(int k = 2; k <= sqrt(val); k++)
    {
        if(val % k == 0)
        {
            return false;
        }
    }

    return true;

}

//function to find the Nth value from the mixture of series
int findNthValueInMixtureOfSeries(int num)
{
    int* mix_series = new int [num];

    //variable to manage the power of 2 & 3
    int value_power_2 = 0, value_power_3 = 0;

    for(int i = 0; i < num; i++)
    {
        //checking is ith position a prime or not
        if(isPrime(i+1))
        {
            mix_series[i] = pow(2,value_power_2);
            value_power_2++;
        }
        //checking is the ith position a perfect square or not
        //e.g. 4 / 2 == int(2) -> True
        //e.g. 8 / 2.8284 == int(2.8282) -> False
        else if(((i+1) / sqrt(i+1)) == int(sqrt(i+1)))
        {
            mix_series[i] = pow(3,value_power_3);
            value_power_3++;             
        }
        else
        {
            mix_series[i] = mix_series[i-1] + mix_series[i-2];
        }
    }

    return mix_series[num-1];
}

int main()
{
    int N = 0, value_nth = 0;

    //input - N - position in the series
    cout<<"Enter the value of N :"<<endl;
    fflush(stdin);
    cin>>N;

    value_nth = findNthValueInMixtureOfSeries(N);

    cout<<endl<<N<<"th value in the series is : "<<value_nth<<endl;

    return 0;
}