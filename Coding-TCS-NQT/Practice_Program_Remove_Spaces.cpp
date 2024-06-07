//given a string, remove spaces from it.

#include<iostream>
#include<string>
#include<vector>
using namespace std;

void removeSpaces(string &str)
{
    int count = 0;
    vector<char>newStr;

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != ' ')
        {
            newStr.push_back(str[i]);
            count++;
        }
    }
    cout<<endl;
    for(auto it = newStr.begin(); it != newStr.end() ; it++)
    {
        cout<< *it;
    }

}

int main()
{
    string str = "";

    cout<<"Enter a string : ";
    fflush(stdin);
    getline(cin, str);       

    removeSpaces(str);
    return 0;
}