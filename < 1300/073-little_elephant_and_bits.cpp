#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    auto first_zero = find(s.begin(), s.end(), '0');
    if(first_zero != s.end()) s.erase(first_zero);
    else s.erase(s.size()-1);

    cout << s << '\n';

    return 0;
}