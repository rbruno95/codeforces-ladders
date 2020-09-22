#include <bits/stdc++.h>

using namespace std;

int main()
{
    string x;
    cin >> x;

    int uppercase_counter = 0;
    for(int i=0;i<x.size();++i)
        if(isupper(x[i]))
            uppercase_counter++;
    
    for(auto &c: x)
        c = uppercase_counter > x.size()/2 ? toupper(c) : tolower(c);
    
    cout << x << '\n';

    return 0;
}