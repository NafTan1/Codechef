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
        long long sum = 0;
        int negative_count = 0;
        int min_abs_value = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += abs(a[i]);
            if (a[i] < 0)
            {
                negative_count++;
            }
            min_abs_value = min(min_abs_value, abs(a[i]));
        }

        if (negative_count % 2 != 0)
        {
            sum -= 2 * min_abs_value;
        }

        cout << sum << endl;
    }

    return 0;
}