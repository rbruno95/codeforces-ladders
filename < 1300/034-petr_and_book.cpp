#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> days(7);
    for(auto &day: days)
        cin >> day;
    
    int i = 0;
    do
    {
        i = 0; 
        do
        {
            n -= days[i];
            i++;
        }
        while(n > 0 and i < 7);

    }while(n > 0);

    cout << i << '\n';

    return 0;
}