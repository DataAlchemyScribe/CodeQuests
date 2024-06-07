/*
A coding competition was conducted in company with e employees. Data of employees who participated and who did not 
participate in the competition is available. There  were three problems in the coding competition. 
Data as mentioned below is available :

The number of employees who solved only the first, only the second and only the third problem are equal.

- p1 employees who solved the first, second problem
- p2 employees who solved the second, third problem
- p3 employees who solved the third, first problem
- q employees who solved all the 3 problems
- r employees who did not participate in competition
******************************************************************
Answer the following questions based on data :

1. How many employees have solved the first problem?
2. How many employees have solved exactly one of the 3 problems?

******************************************************************
Input - 

p1 - 30
p2 - 26
p3 - 28
q - 14
e - 345
r - 43

Output - 

1. 126
2. 246

*/

#include<iostream>
using namespace std;

void mySolution(int P1, int P2, int P3, int Q, int E,int R)
{
    int  emp_solved_first_problem = 0, emp_solved_exact_one_of_three_problem = 0;

    //equation using venn diagram - three region where individual employee has attempt exact one question
    emp_solved_exact_one_of_three_problem =  E - R + 2*Q - P1 - P2 - P3 ;

    //equation using venn diagram - region where employees has attempt first question
    emp_solved_first_problem = (emp_solved_exact_one_of_three_problem/3) + P1 - Q + Q + P3 - Q;

    cout<<endl<<"1. "<<emp_solved_first_problem<<endl<<"2. "<<emp_solved_exact_one_of_three_problem<<endl;
}

int main()
{
    int p1 = 0, p2 = 0, p3 = 0, q = 0, e = 0, r = 0;
    
    cout<<"Enter the input values in order (p1,p2,p3,q,e,r) :"<<endl;
    fflush(stdin);
    cin>>p1>>p2>>p3>>q>>e>>r;

    mySolution(p1,p2,p3,q,e,r);

    return 0;
}