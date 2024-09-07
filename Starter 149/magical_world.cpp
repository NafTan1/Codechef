#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, x;
        cin >> a >> b >> x;
        int rec_area = a * b;
        int sqr_area = x * x;
        if (sqr_area >= rec_area)
        {
            cout << "0" << endl;
        }
        else if (a > sqr_area && b > sqr_area)
        {
            if (a > b)
            {
                a = 1;
            }
            else
                b = 1;
            int area = a * b;
            if (area > sqr_area)
            {
                cout << "2" << endl;
            }
            else
                cout << "1" << endl;
        }
        else
            cout << "1" << endl;
    }

    return 0;
}