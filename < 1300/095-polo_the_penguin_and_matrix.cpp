#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, d;
    cin >> n >> m >> d;
    
    vector<int> v(n*m);
    
    for(int i=0;i<n*m;++i)
        cin >> v[i];
    
    for(int i=0;i<n*m-1;++i)
        if((v[i+1]-v[i]) % d != 0)
        {
            cout << -1 << '\n';
            return 0;
        }

    sort(v.begin(), v.end());

    int best = 1e9+10;
    int first = v[0];
    while(first <= v[n*m-1])
    {
        int counter = 0;
        for(int i=0;i<n*m;++i)
            counter += abs(v[i]-first)/d;
        best = min(counter, best);
        first += d;
    }

    cout << best << '\n';

    return 0;
}