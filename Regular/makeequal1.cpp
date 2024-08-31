#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        int max_elem = *max_element(arr.begin(), arr.end());
        int g = arr[0];
        for (int i = 1; i < n; ++i) {
            g = __gcd(g, arr[i]);
        }
        bool possible = true;
        for (int i = 0; i < n; ++i) {
            if ((max_elem - arr[i]) % g != 0) {
                possible = false;
                break;
            }
        }

        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}
