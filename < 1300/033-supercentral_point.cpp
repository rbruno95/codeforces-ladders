#include <bits/stdc++.h>

using namespace std;

#define x first
#define y second

int main()
{
    int n;
    cin >> n;
    vector<pair<int,int>> points(n);

    for(auto &point: points)
        cin >> point.first >> point.second;
    
    int counter = 0;
    for(int i=0;i<n;++i)
    {
        bool left = false;
        bool right = false;
        bool lower = false;
        bool upper = false;

        for(int j=0;j<n;++j)
        {
            if(i==j) continue;
            left = left | (points[i].y == points[j].y and points[i].x > points[j].x);
            right = right | (points[i].y == points[j].y and points[i].x < points[j].x);
            upper = upper | (points[i].y < points[j].y and points[i].x == points[j].x);
            lower = lower | (points[i].y > points[j].y and points[i].x == points[j].x);
        }
        
        counter += (left and right and lower and upper);
    }

    cout << counter << '\n';

    return 0;
}