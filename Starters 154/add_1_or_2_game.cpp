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
        if (n < 2)
            cout << "ALICE" << endl;
        else
            cout << "BOB" << endl;
    }

    return 0;
}