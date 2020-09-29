#include <bits/stdc++.h>

using namespace std;

int main()
{
    string x;
    cin >> x;

    set<char> s;

    for(auto letter: x)
        s.insert(letter);

    cout << ((s.size() & 1) ? "IGNORE HIM!": "CHAT WITH HER!") << '\n';

    return 0;
}