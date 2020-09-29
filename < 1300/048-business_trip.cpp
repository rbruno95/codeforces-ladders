#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k;
    cin >> k;

    vector<int> months(12);
    for(int i=0;i<12;++i)
        cin >> months[i];
    
    sort(months.rbegin(), months.rend());

    int i;

    for(i=0 ; i<12 and k>0 ;++i) k-=months[i];        

    cout << ((k>0) ? -1 : i) << '\n';

    return 0;
}