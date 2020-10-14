#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    map<char, int> mp;

    for(int i=0;i<s1.size();++i)
        if(s1[i]!=' ')
            mp[s1[i]]++;
    
    for(int i=0;i<s2.size();++i)
        if(s2[i]!=' ')
            mp[s2[i]]--;
    
    for(auto letter: mp)
        if(letter.second < 0)
        {
            cout << "NO\n";
            return 0;
        }

    cout << "YES\n";

    return 0;
}