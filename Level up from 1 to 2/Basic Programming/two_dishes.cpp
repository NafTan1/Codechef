#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; 
    cin >> t;
    while (t--)
    {
        int n,f,v,m;
        cin >> n >> f >> v >> m;
        if (v>=n) {
            if (f+m>=n) cout << "YES" <<endl;
            else cout << "NO" << endl; 
        }
        else cout << "NO" << endl;
    }
    
    return 0;
}