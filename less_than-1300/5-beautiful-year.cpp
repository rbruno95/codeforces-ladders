#include <bits/stdc++.h>

using namespace std;

bool has_different_digits(int y)
{
    set<int> s;

    while(y)
    {
        if(s.count(y%10)) return false;
        s.insert(y%10);
        y/=10;
    }    
    return true;
}

int main()
{

    int y;
    cin >> y;

    do
    {
        y++;
    }while(!has_different_digits(y));

    cout << y << '\n';

    return 0;
}