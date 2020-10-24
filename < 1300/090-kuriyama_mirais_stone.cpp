#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<long long> v(n);
    for(int i=0;i<n;++i)
        cin >> v[i];
    
    vector<long long> u = v;
    sort(u.begin(), u.end());

    vector<long long> v_sum(n+1), u_sum(n+1);
    partial_sum(v.begin(), v.end(), v_sum.begin()+1);
    partial_sum(u.begin(), u.end(), u_sum.begin()+1);

    int m;
    cin >> m;

    for(int i=0;i<m;++i)
    {
        int x,l,r;
        cin >> x >> l >> r;
        
        if(x == 1) cout << v_sum[r] - v_sum[l-1];
        else cout << u_sum[r] - u_sum[l-1];
        
        cout << '\n';
    }

    return 0;
}