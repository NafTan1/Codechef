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
        int sz = (n / 2);
        int l = (sz) / 2;
        int b = (sz - l);
        int area = l * b;
        cout << area << endl;
    }

    return 0;
}