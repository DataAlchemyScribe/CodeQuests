/*
You are given the scores of a football league among a set of teams. You need to find the winner of the league and print the name of winner and points earned by the team. Each team gets 3 points for a win, 1 point for a draw and 0 for a loss. The name of the teams is represented as upper case character viz. A B ... Z.

Note - There will only be one team which gets the higher points

Input -

There are many lines in the input

The first line contains an integer, N - representing number of teams in league. The next (N*(N-1))/2 lines contain three space separated strings <Team1,Team2,Score>

Here,
- Team1 is the name of the home team
- Team2 is the name of the away team
- Score represents the score of the match, (M-N), where M represents the score of the home team and N represents the score of the away team.

Output -

The output should have two lines

The first line should contain a character represents the name of the leader team.
The second line containing an integer representing the points won by the leader team.

Example -

Input -

3
A B 2-1
B C 5-6
C A 2-1

Output -

C
6
*/


#include<iostream>
#include<string>
#include<limits.h>
using namespace std;

int main()
{
    int num_teams, winner_tm_points = INT_MIN;
    char tm_winner;
        
    fflush(stdin);

    //input - total number of teams participated in football league
    cin>>num_teams;

    //array to store and manage the scores of each teams
    int* score_teams = new int [num_teams] {0};

    fflush(stdin);
    //input - match details <Team1 Team2 Score>
    for(int i = 0; i < ((num_teams * (num_teams - 1))/2) ; i++)
    {
        //variables to store the character of home and away team in a match
        char tm_home, tm_away;

        //variables to store score of home and away team in a match
        string scr_home_tm = "", scr_away_tm = "";

        //input - Team1 <space> Team2 <space> Score
        string str_match_details = "";
        getline(cin,str_match_details);  

        //first character in string - Team1 - Home Team
        tm_home = str_match_details[0];
        
        //Third character in string - Team2 - Away Team
        tm_away = str_match_details[2];

        //Fifth character onwards - Score (M - N)
        int j = 4;

        //reading score of home team in the match (M)
        while(str_match_details[j] != '-')
        {
            scr_home_tm += str_match_details[j];
            j++;
        }
        j++;
        //reading score of away team in the match (N)
        while(str_match_details[j] != '\0')
        {
            scr_away_tm += str_match_details[j];
            j++;
        }

        //Home team won the match
        if(stoi(scr_home_tm) > stoi(scr_away_tm))
        {
            score_teams[tm_home - 'A'] += 3;
        }
        //Away Team won the match
        else if(stoi(scr_home_tm) < stoi(scr_away_tm))
        {
            score_teams[tm_away - 'A'] += 3;
        }
        //Match was declared draw
        else
        {
            score_teams[tm_home - 'A'] += 1;
            score_teams[tm_away - 'A'] += 1;
        }

        fflush(stdin);     
    }

    cout<<endl;
    fflush(stdin);

    cout<<endl<<endl;
    for(int k = 0; k < num_teams ; k++)
    {
        if(score_teams[k] > winner_tm_points)
        {
            winner_tm_points = score_teams[k];
            tm_winner = char('A' + k);
        }
    }

    cout<<tm_winner<<endl<<winner_tm_points<<endl;
    return 0;
}