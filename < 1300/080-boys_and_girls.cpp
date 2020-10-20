#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, m;
    cin >> n >> m;

    if(n >= m)
    {
        while(n > m)
        {
            cout << "B";
            n--;
        }
        for(int i=0;i<n;++i)
            cout << "GB";
    }
    else
    {
        while(m > n)
        {
            cout << "G";
            m--;
        }
        for(int i=0;i<n;++i)
            cout << "BG";
    }
    
    cout << '\n';

    return 0;
}