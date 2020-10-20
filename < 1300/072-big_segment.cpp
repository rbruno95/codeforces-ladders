#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<pair<int,int>> segments(n);
    int large_idx = 0;
    int large_distance = 0;

    for(int i=0;i<n;++i)
    {
        cin >> segments[i].first >> segments[i].second;
        if(large_distance < segments[i].second - segments[i].first)
        {
            large_distance = segments[i].second - segments[i].first;
            large_idx = i;
        }
    }

    for(int i=0;i<n;++i)
        if(segments[i].first < segments[large_idx].first or segments[i].second > segments[large_idx].second)
        {
            cout << -1 << '\n';
            return 0;
        }

    cout << large_idx + 1 << '\n';

    return 0;
}