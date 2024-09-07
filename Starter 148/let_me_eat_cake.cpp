#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    
    while (t--)
    {
        int a,b;
        cin >> a >> b;
        float bob=0;
        if (a==b) cout << "0" << endl;
        else {
        while (a!=b)
        {
            //cout << a <<" "<<b << endl;
            if (a>b){
                int x=round((a*1.0)/2);
                bob+=x;
                a=a-x;
            }
            else if(b>a){
                int x=round((b*1.0)/2);
                bob+=x;
                b=b-x;
            }
        }
        cout << bob << endl;
        }
         
    }

    
    return 0;
}