#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int idx_max = n;
    int max = 0;
    int x;

    for(int i=1;i<=n;++i)
    {
        cin >> x;
        x = (x-1) / m;
        if(x >= max)
        {
            max = x;
            idx_max = i;
        }
    }    

    cout << idx_max << '\n';

    return 0;
}