#include <bits/stdc++.h>

using namespace std;

bool is_magic(string x)
{
    for(int i=0;i<x.size();++i)
    {
        if(x[i] == '1')
        {
            if(i+1 < x.size() and x[i+1] == '4')
            {
                if(i+2 < x.size() and x[i+2] == '4')
                {
                    i++;
                }
                i++;
            }            
        }
        else return false;
    }
    return true;
}

int main()
{
    string number;
    cin >> number;

    cout << (is_magic(number)?"YES":"NO") << '\n';

    return 0;
}