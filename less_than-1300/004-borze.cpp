#include <bits/stdc++.h>

using namespace std;

int main()
{

    string code;
    cin >> code;

    for(int i=0;i<code.size();++i)
    {
        if(code[i] == '.') cout << '0';
        else
        {
            if(code[i+1] == '.') cout << '1';
            else cout << '2';
            i++;
        }        
    }

    cout << '\n';

    return 0;
}