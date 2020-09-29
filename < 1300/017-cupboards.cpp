#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int l_sum = 0, r_sum = 0;
    int l, r;   

    for(int i=0;i<n;++i)
    {
        cin >> l >> r;
        l_sum += l, r_sum += r;
    }

    cout << min(l_sum, n-l_sum) + min(r_sum, n-r_sum) << '\n';

    return 0;
}