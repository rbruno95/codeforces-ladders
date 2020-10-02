#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin >> str;

    set<char> vowels = {'a', 'e', 'i', 'y', 'o', 'u'};

    for(int i=0;i<str.size();++i)
    {
        str[i] = tolower(str[i]);
        if(!vowels.count(str[i]))
            cout << '.' << str[i];
    }

    cout << '\n';

    return 0;
}