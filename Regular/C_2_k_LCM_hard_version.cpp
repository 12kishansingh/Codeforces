#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;

void solve(){
    int n, k;
    cin >> n >> k;
    
    if (k == 3) {
        if (n % 2 == 1) {
            cout << n/2 << " " << n/2 << " " << 1 << endl;
        } else {
            if ((n/2) % 2 == 0) {
                cout << n/2 << " " << n/4 << " " << n/4 << endl;
            } else {
                cout << n/2 - 1 << " " << n/2 - 1 << " " << 2 << endl;
            }
        }
    } else {
        for (int i = 0; i < k - 3; i++) {
            cout << "1 ";
        }
        int rem = n - k + 3;
        if (rem % 2 == 1) {
            cout << rem/2 << " " << rem/2 << " " << 1 << endl;
        } else {
            if ((rem/2) % 2 == 0) {
                cout << rem/2 << " " << rem/4 << " " << rem/4 << endl;
            } else {
                cout << rem/2 - 1 << " " << rem/2 - 1 << " " << 2 << endl;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}
