#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k;
    cin >> k;

    string str;
    cin >> str;

    map<char, int> mp;

    for(int i=0;i<str.size();++i)
        mp[str[i]]++;
    
    bool exists = str.size() % k == 0;

    string sol = "";

    for(auto letter: mp)
    {
        if(letter.second % k == 0)
        {
            sol += string(letter.second/k, letter.first);
        }
        else
        {
            exists = false;
            break;
        }
    }

    if(exists)
    {
        for(int i=0;i<k;++i) cout << sol;
    }
    else cout << -1;
    
    cout << '\n';
        
    return 0;
}