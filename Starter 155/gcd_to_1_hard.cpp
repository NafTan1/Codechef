#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m, 2));
        for (int i = 0; i < n; i++)
        {
            a[i][i % m] = 3;
        }
        for (int j = 0; j < m; ++j)
        {
            bool hasThree = false;
            for (int i = 0; i < n; ++i)
            {
                if (a[i][j] == 3)
                {
                    hasThree = true;
                    break;
                }
            }
            if (!hasThree)
            {
                a[j % n][j] = 3;
            }
        }
        // print
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}