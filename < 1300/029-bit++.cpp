#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int x = 0;

    while(n--)
    {
        string s;
        cin >> s;

        x += ((s[1] == '+') ? 1 : -1);
    }

    cout << x << '\n';

    return 0;
}