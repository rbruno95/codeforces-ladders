#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << setprecision(4) << fixed;

    int n;
    cin >> n;

    int sum = 0;
    int x;
    for(int i=0;i<n;++i)
    {
        cin >> x;
        sum += x;
    }

    cout << 1. * sum / n << '\n';

    return 0;
}