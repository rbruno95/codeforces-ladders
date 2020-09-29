#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i=0;i<n;++i)
        cin >> a[i];
    
    int m;
    cin >> m;

    vector<int> b(m);
    for(int j=0;j<m;++j)
        cin >> b[j];

    int max_ratio = 0;
    int gear_counter = 0;

    for(int i=0;i<n;++i)
        for(int j=0;j<m;++j)
            if(b[j] % a[i] == 0 and b[j] / a[i] >= max_ratio)
                if(b[j]/a[i] > max_ratio)
                {
                    gear_counter = 1;
                    max_ratio = b[j]/a[i];
                }
                else
                    gear_counter++;

    cout << gear_counter << '\n';

    return 0;
}