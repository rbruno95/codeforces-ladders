#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, s_x, s_y, e_x, e_y;
    cin >> t >> s_x >> s_y >> e_x >> e_y;

    string s;
    cin >> s;

    int counter = -1;
    for(int i=0;i<t;++i)
    {
        if(e_x - s_x > 0 and s[i] == 'E') s_x++;
        if(e_x - s_x < 0 and s[i] == 'W') s_x--;
        if(e_y - s_y > 0 and s[i] == 'N') s_y++;
        if(e_y - s_y < 0 and s[i] == 'S') s_y--;

        if(e_x == s_x and e_y == s_y)
        {
            counter = i+1;
            break;
        }
    }

    cout << counter << '\n';
    
    return 0;
}