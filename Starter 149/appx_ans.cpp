#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, k;
    cin >> x >> y >> k;
    int d = abs(x - y);
    if (d <= k)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}