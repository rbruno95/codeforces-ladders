#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a,b,c;
    cin >> a >> b >> c;

    multiset<char> ms1, ms2;

    for(auto letter: a)
        ms1.insert(letter);
    
    for(auto letter: b)
        ms1.insert(letter);
    
    for(auto letter: c)
        ms2.insert(letter);
    
    cout << ((ms1 == ms2) ? "YES" : "NO") << '\n'; 

    return 0;
}