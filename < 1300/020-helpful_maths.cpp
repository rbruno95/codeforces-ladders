#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    string sol = "";

    for(int i=0;i<s.size();++i)
        if(s[i] == '1') sol += '1';
        else if(s[i] == '2') sol += '2';
        else if(s[i] == '3') sol += '3';
    
    sort(sol.begin(), sol.end());

    for(int i=0;i<sol.size();++i)
        cout << sol[i] << "+\n"[ (i+1) == sol.size() ];

    return 0;
}