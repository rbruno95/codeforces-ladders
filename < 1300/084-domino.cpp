#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    bool even_and_odd = false;
    int a, b;
    int sum_a = 0, sum_b = 0;

    for(int i=0;i<n;++i)
    {
        cin >> a >> b;
        if((a & 1 and !(b & 1)) or (!(a & 1) and b & 1)) even_and_odd = true;
        sum_a += a;
        sum_b += b;
    }

    if(sum_a % 2 == 0 and sum_b % 2 == 0) cout << 0;
    else if((sum_a + sum_b) & 1) cout << -1;
    else
    {
        if(n == 1) cout << -1;
        else if(even_and_odd) cout << 1;
        else cout << -1;
    }

    cout << '\n';

    return 0;
}