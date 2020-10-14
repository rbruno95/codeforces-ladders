#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<string> tab(n);
    for(int i=0;i<n;++i)
        cin >> tab[i];
    
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
            cout << ((tab[i][j] == '.') ? (((i + j) & 1) ? 'W' : 'B') : tab[i][j]);
        cout << '\n';
    }

    return 0;
}