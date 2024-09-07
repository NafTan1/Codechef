#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long l, r;
        cin >> l >> r;
    
        long long min_sum = 2 * l;
        long long max_sum = 2 * r;
    
        long long distinct_reachable = max_sum - min_sum + 1;
        
        cout << distinct_reachable << endl;
    }
    
    return 0;
}