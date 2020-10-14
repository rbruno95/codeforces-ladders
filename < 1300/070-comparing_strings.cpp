#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;

    if(a.size() == b.size())
    {
        vector<int> diffs;
        for(int i=0;i<a.size();++i)
            if(a[i] != b[i])
                diffs.emplace_back(i);
        
        if(!diffs.size()) cout << "YES";
        else if(diffs.size() == 2)
        {
            swap(a[diffs[0]], a[diffs[1]]);
            if(a == b) cout << "YES";
            else cout << "NO";
        }
        else cout << "NO";
    } else cout << "NO";

    cout << '\n';

    return 0;
}