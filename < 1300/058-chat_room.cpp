#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    string hello = "hello";

    int idx = 0;
    for(int i=0;i<s.size() and idx < hello.size();++i)
        if(hello[idx] == s[i])
            idx++;
        
    cout << ((idx == 5) ? "YES" : "NO") << '\n';

    return 0;
}