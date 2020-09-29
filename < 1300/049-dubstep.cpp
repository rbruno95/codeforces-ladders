#include <bits/stdc++.h>

using namespace std;

int main()
{
    string song;
    cin >> song;

    string sol = "";

    for(int i=0;i<song.size();++i)
        if(song[i] == 'W')
            if(i+1 < song.size() and song[i+1] == 'U')
                if(i+2 < song.size() and song[i+2] == 'B')
                {
                    i += 2;
                    sol += ((sol != "" and sol[sol.size()-1] != ' ') ? " " : "");
                }
                else
                    sol += song[i];
            else
                sol += song[i];
        else
            sol += song[i];

    cout << sol << '\n';

    return 0;
}