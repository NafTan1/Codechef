#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int mx = max(x, y);
        int mn = min(x, y);
        if (x >= 2 * y || y >= 2 * x)
            cout << "0" << endl;
        else
        {
            int result = mn - (mx / 2);
            cout << result << endl;
        }
    }

    return 0;
}