#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> soldiers(n+1);
    for(int i=0;i<n;++i)
        cin >> soldiers[i];
    soldiers[n] = soldiers[0];

    int idx = 1;
    int min_diff = abs(soldiers[0] - soldiers[1]);

    for(int i=0;i<n;++i)
    {
        int diff = abs(soldiers[i] - soldiers[i+1]);
        if(diff < min_diff)
        {
            idx = i + 1;
            min_diff = diff;
        }
    }

    int idx_next = idx + 1;
    if(idx_next > n) idx_next %= n;
    
    cout << idx << " " << idx_next << '\n';

    return 0;
}