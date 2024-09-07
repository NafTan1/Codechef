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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int j = 0; j < k; j++)
        {

            int x = a.front();
            int y = a.back();
            a.pop_back();
            a.erase(a.begin());
            a.push_back(x + y);
                }

        for (int i = 0; i < a.size(); i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}