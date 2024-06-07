/*
Input -

input has three lines -

first line - N M R (N - number of incoming pipes, M - number of outgoing pipes, R - rust factor)
second line - N values denoting rated capacity of each incoming pipes
third line - M values denoting rated capacity of each outgoing pipes

Output - 

print the rated capacity of pipe required to balance the junction or print "BALANCED", if junction is already balanced.

Note - 

1. Rust factor remains same for all pipes
2. rated capacity = actual capacity + rust factor
3. if sum of actual capacity of incoming pipes = sum of actual capacity of outgoing pipes, then junction is already balanced
4. for displaying rated capacity of added pipe,
	if incoming pipe is added then display as +ve integer
	else if outgoing pipe is added then display as -ve integer
	else print "Balanced"


Example 1 - 

Input -

3 3 2
85 75 95
70 80 45

Output - 

-62

Example 2 - 

Input - 
5 6 1
10 26 33 40 50
20 7 53 25 45 10

Output - 

BALANCED
*/

#include<iostream>
using namespace std;

int calculateRatedCapacityOfNewAddedPipe(int inc_ac, int out_ac, int r)
{
    int rc = 0;
    //sum of actual capacity of incoming pipes > sum of actual capacity of outgoing pipes
    if(inc_ac > out_ac)
    {
        rc = abs(inc_ac - out_ac) + r;
        return (-1*rc);
    }
    //sum of actual capacity of incoming pipes < sum of actual capacity of outgoing pipes
    else
    {
        rc = abs(inc_ac - out_ac) + r;

        return rc;
    }
}


int main()
{
    int N = 0, M = 0, R = 0;
    
    //first input line
    cout<<"Enter the number of incoming pipes, outgoing pipes and value of rust factor (N,M,R) :"<<endl;
    fflush(stdin);
    cin>>N>>M>>R;

    //1-D dynamic array initialization for rated capacity of incoming pipes
    int* incoming = new int [N];

    //initializing a variable to store the sum of actual capacity of incoming pipes
    int sum_ac_incoming = 0;

    //second input line
    cout<<"Enter the values of rated capacity of "<<N<<" incoming pipes :"<<endl;
    fflush(stdin);
    for(int i = 0; i < N; i++)
    {
        cin>>incoming[i];
        //calulating actual capacity of each incoming pipe and doing sum of that
        sum_ac_incoming = sum_ac_incoming + (incoming[i] - R);
    }

    //1-D dynamic array initialization for rated capacity of outgoing pipes
    int* outgoing = new int [M];

    //initializing a variable to store the sum of actual capacity of outgoing pipes
    int sum_ac_outgoing = 0;

    //third input line
    cout<<"Enter the values of rated capacity of "<<M<<" outgoing pipes :"<<endl;
    fflush(stdin);
    for(int i = 0; i < M; i++)
    {
        cin>>outgoing[i];
        //calulating actual capacity of each outgoing pipe and doing sum of that
        sum_ac_outgoing = sum_ac_outgoing + (outgoing[i] - R);
    }

    if(sum_ac_incoming == sum_ac_outgoing)
    {
        cout<<endl<<"BALANCED"<<endl;
    }
    else
    {
        int rated_capacity_new_added_pipe = 0;

        rated_capacity_new_added_pipe = calculateRatedCapacityOfNewAddedPipe(sum_ac_incoming,sum_ac_outgoing,R);

        cout<<endl<<rated_capacity_new_added_pipe<<endl;
    }

    return 0;
}