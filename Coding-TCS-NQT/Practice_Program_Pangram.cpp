/*
given the input string, find out whether the string is pangram or not

note: a string is said to be pangram if it contains all the alphabets from 'a' to 'z'

Input 	- There is only one line in the input (String)

Output 	- Yes (if its pangram)
	- No (if not a pangram)

Example - 

Input - 

The quick brown fox jumps over the lazy dog

Output -

Yes

other pangram strings -
1. Pack my box with five dozen liquor jugs
2. My ex pub quiz crowd gave joyful thanks
3. Glib jocks quiz nymph to vex dwarf
4. Waltz, bad nymph, for quick jigs vex
*/

#include<iostream>
#include<string>
#include<ctype.h>
using namespace std;

int checkPangram(string s)
{
    //frequency counting array
    int freq[26] = {0};
    //temporary character variable to store and update the frequency
    char temp;

    //reading each character from string and updating it's frequency count
    //while reading each character, convert it into uppercase
    for(int i = 0; s[i] != '\0'; i++)
    {
        //if any special character or white space encounter then simply jump to next character
        if(toupper(s[i]) < 65 && toupper(s[i] > 90))
        {
            continue;
        }
        temp = toupper(s[i]);
        freq[temp - 'A'] += 1;
    }

    //analyzing the frequency array
    for(int i = 0; i < 26; i++)
    {
        //any index got 0 value, then that character was absent in the string
        if(freq[i] == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    //input string variable
    string ipt_str = "";
    
    int res = -1;
    fflush(stdin);

    //input - string
    cout<<"Enter the input string :"<<endl;
    fflush(stdin);
    getline(cin,ipt_str);
    
    res = checkPangram(ipt_str);

    (res == 0) ? cout<<endl<<"No"<<endl : cout<<endl<<"Yes"<<endl;
    return 0;
}