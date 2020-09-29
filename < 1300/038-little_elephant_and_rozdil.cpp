#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int idx = -1;
    int min_town = 1e9+10;

    int town;
    for(int i=1;i<=n;++i)
    {
        cin >> town;
        if(town < min_town)
        {
            min_town = town;
            idx = i;
        }
        else if(town == min_town)
        {
            idx = -1;
        }
    }

    if(idx > 0) cout << idx;
    else cout << "Still Rozdil";
    cout << '\n';

    return 0;
}