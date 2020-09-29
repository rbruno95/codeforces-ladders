#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    bool ans = false;

    for(auto c: s)
        if(c == 'H' or c == 'Q' or c == '9')
        {
            ans = true;
            break;
        }

    cout << (ans ? "YES" : "NO") << '\n';

    return 0;
}