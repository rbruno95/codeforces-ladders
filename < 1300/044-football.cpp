#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    map<string, int> mp;
    string x;
    while(n--)
    {
        cin >> x;
        mp[x]++;;
    }

    string sol;
    int max_goals = 0;
    for(auto team: mp)
    {
        if(team.second > max_goals)
        {
            max_goals = team.second;
            sol = team.first;
        }
    }

    cout << sol << '\n';

    return 0;
}