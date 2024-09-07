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
        int mx = 0;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > 0 && a[i + 1] > 0)
            {
                continue;
            }
            else if (a[i] < 0 && a[i + 1] > 0)
            {
                cnt++;
                a[i] = 0;
            }
            else if (a[i + 1] < 0 && a[i] > 0)
            {
                cnt++;
                a[i + 1] = 0;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}