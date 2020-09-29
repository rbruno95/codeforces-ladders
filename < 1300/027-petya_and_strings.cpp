#include <bits/stdc++.h>

using namespace std;

void string_to_lower(string &x)
{
    for(auto &c: x)
        c = tolower(c);
}

int main()
{
    string x, y;
    cin >> x >> y;

    string_to_lower(x);
    string_to_lower(y);

    cout << ((x < y) ? -1 : ((x > y) ? 1 : 0)) << '\n';

    return 0;
}