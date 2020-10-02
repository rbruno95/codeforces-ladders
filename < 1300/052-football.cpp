#include <bits/stdc++.h>

using namespace std;

int main()
{
    string players;
    cin >> players;

    int counter = 1;
    for(int i=1;i<players.size();++i)
    {
        counter = (players[i] == players[i-1]) ? counter + 1 : 1;
        if(counter == 7)
        {
            cout << "YES\n";
            return 0;
        } 
    }

    cout << "NO\n";

    return 0;
}