#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int _ = 0; _ < t; _++) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int& x : a) {
            cin >> x;
        }

        vector<int> res;

        while (*max_element(a.begin(), a.end()) > 0) {
            if (res.size() >= 40) {
                cout << -1 << endl;
                goto next_case;
            }

            vector<int> b;
            for (int x : a) {
                if (x != 0) {
                    b.push_back(x);
                }
            }
            if (b.size() > 1 && (b[0] % 2) != (b[1] % 2)) {
                cout << -1 << endl;
                goto next_case;
            }

            int mn = *min_element(a.begin(), a.end());
            int mx = *max_element(a.begin(), a.end());
            int x = (mn + mx) / 2;
            res.push_back(x);
            for (int& ai : a) {
                ai = abs(ai - x);
            }
        }

        cout << res.size() << endl;
        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }
        cout << endl;

    next_case:
        continue;
    }

    return 0;
}
