#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    map<char, int> mp;
    for(int i=0;i<s.size();++i)
        mp[s[i]]++;
    
    int counter = 0;
    for(auto letter: mp)
        counter += letter.second & 1;
    
    cout << ((counter & 1 or !counter) ? "First" : "Second") << '\n';

    return 0;
}