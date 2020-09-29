#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;    

    if(n & 1)
    {
        if(2*k <= n+1) cout << 2*k-1;
        else cout << 2*k-(n+1);
    }
    else
    {
        if(2*(k-1) < n) cout << 2*k-1;
        else cout << 2*k-n;
    }

    cout << '\n';    

    return 0;
}