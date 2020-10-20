#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for(int i=0;i<n;++i)
        cin >> v[i];
    
    vector<int> dp(n);
    partial_sum(v.begin(), v.end(), dp.begin());

    int minn = dp[k-1];
    int idx = 1;
    for(int i=1;i<n-k+1;++i)
        if(minn > dp[i+k-1]-dp[i-1])
        {
            minn = dp[i+k-1]-dp[i-1];
            idx = i+1;
        }
    
    cout << idx << '\n';

    return 0;
}