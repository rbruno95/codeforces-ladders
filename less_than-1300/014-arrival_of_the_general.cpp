#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin >> n;

    vector<int> soldiers(n);
    for(auto &soldier: soldiers)
        cin >> soldier;
    
    int maxs = soldiers[0];
    int max_idx = 0;
    for(int i=0;i<n;++i)
        if(soldiers[i] > maxs)
        {
            maxs = soldiers[i];
            max_idx = i;
        }
    
    int mins = soldiers[n-1];
    int min_idx = n-1;
    for(int i=n-1;i>=0;i--)
        if(soldiers[i] < mins)
        {
            mins = soldiers[i];
            min_idx = i;
        }
    
    cout << max_idx + (n - 1 - min_idx) + ( (min_idx < max_idx)? -1 : 0 ) << '\n';

    return 0;
}