#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    string s1(s, 0, n), s2(s, n, 2*n);
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    bool greater = true;
    for(int i=0;i < n;++i)
        if(s1[i] <= s2[i])
        {
            greater = false;
            break;
        }

    bool lesser = true;
    for(int i=0;i < n;++i)
        if(s1[i] >= s2[i])
        {
            lesser = false;
            break;
        }

    if(greater or lesser) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}