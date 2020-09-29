#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    long long counter = 0;
    int house = 1;
    int x;
    for(int i=0;i<m;++i)
    {
        cin >> x;
        counter += x - house + ((x >= house) ? 0 : n);   
        house = x;
    }

    cout << counter << '\n';

    return 0;
}