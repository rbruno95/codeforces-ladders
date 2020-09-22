#include <bits/stdc++.h>

using namespace std;

int main()
{
    string number;
    cin >> number;

    int lucky = 0;
    for(auto digit: number)
        if(digit == '4' or digit == '7')
            lucky++;

    if(lucky == 4 or lucky == 7) cout << "YES\n";
    else cout << "NO\n";
    
    return 0;
}