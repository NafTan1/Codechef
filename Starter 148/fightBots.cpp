// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n,x,y;
//         cin >> n >> x >> y;
//         int a_x=0;
//         int a_y=0;
//         string s;
//         cin >> s;
//         for (int i=0; i<s.size(); i++){
//             if (s[i]=='R') a_x+=1;
//             else if  (s[i]=='L') a_x-=1;
//             else if  (s[i]=='D') a_y-=1;
//             else a_y+=1;
//         }
//         cout << a_x <<" "<<a_y;
        
//         for (int i = 0; i < n; i++)
//         {
//             string c ="DDLUR";
//         }
        

//     }
    
//     return 0;
// }

#include <iostream>
#include <vector>
#include <string>
using namespace std;

void generateCombinations(string current, int n, vector<string> &combinations) {
    if (current.length() == n) {
        combinations.push_back(current);
        return;
    }
    char moves[] = {'L', 'R', 'U', 'D'};
    for (char move : moves) {
        generateCombinations(current + move, n, combinations);
    }
}

int main() {
    int n;
    cout << "Enter the length of combinations: ";
    cin >> n;

    vector<string> combinations;
    generateCombinations("", n, combinations);

    cout << "All possible combinations of length " << n << " are:" << endl;
    for (const string &combination : combinations) {
        cout << combination << endl;
    }

    return 0;
}