#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> frq(101);
        int zero = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 0)
                zero++;
            else
                frq[a[i]]++;
        }
        int mx = 0;

        for (int i = 0; i < frq.size(); i++)
        {
            if (frq[i] > mx)
            {
                mx = frq[i];
            }
        }
        int cnt = 0;
        for (int i = 0; i < frq.size(); i++)
        {
            if (frq[i] == mx)
            {
                cnt++;
            }
        }
        if (zero == 0)
        {
            if (mx > 2)
            {
                mx = ((mx * (mx - 1)) / 2) * cnt;
                cout << mx << endl;
            }
            else
                cout << cnt << endl;
        }
        else
        {
            int result = mx + zero;
            result = (result * (result - 1)) / 2;
            cout << result << endl;
        }
    }
    return 0;
}
