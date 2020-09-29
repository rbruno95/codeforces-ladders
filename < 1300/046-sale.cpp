#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> tvs(n);
    for(int i=0;i<n;++i)
        cin >> tvs[i];
    
    sort(tvs.begin(),tvs.end());

    int sum = 0;
    for(int i=0;i < m and tvs[i] < 0;++i)
        sum += tvs[i];
    
    cout << abs(sum) << '\n';

    return 0;
}