#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int mx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int s, r;
            cin >> s >> r;
            if (s<=x){
                mx=max(r,mx);
            }
        }

        cout << mx << endl;
        
    }
    
    return 0;
}