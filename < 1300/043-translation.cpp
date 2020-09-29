#include <bits/stdc++.h>

using namespace std;

int main()
{
    string x, y;
    cin >> x >> y;

    reverse(x.begin(), x.end());

    cout << ((x == y) ? "YES" : "NO") << '\n'; 

    return 0;
}