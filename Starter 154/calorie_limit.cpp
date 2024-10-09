#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int sum = 0;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
            if (sum > k)
            {
                break;
            }
            count++;
        }
        cout << count << endl;
    }

    return 0;
}