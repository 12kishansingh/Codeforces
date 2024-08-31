#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) begin(x), end(x)
const int M = 1e9 + 7;
template <typename T>
istream &operator>>(istream &istream, vector<T> &v) {
    for (auto &it : v) cin >> it;
    return istream;
}

template <typename T>
ostream &operator<<(ostream &ostream, const vector<T> &c) {
    for (auto &it : c) cout << it << " ";
    return ostream;
}
void solve() {
    int n;
    cin >> n;
    vector<pair<long double, long double>> v(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> v[i].first >> v[i].second;
    }
    long double xs, ys, xt, yt;
    cin >> xs >> ys >> xt >> yt;
    long double t = sqrt((xt - xs) * (xt - xs) + (yt - ys) * (yt - ys));
    for (const auto &x : v) {
        long double cx = x.first;
        long double cy = x.second;
        long double goal = sqrt((cx - xt) * (cx - xt) + (cy - yt) * (cy - yt));
        
        if (goal <= t) {
            cout << "NO" << endl;
            return;
        }
    }

    
    cout << "YES" << endl;
}

// Main function
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    // Process each test case
    while (t--) {
        solve();
    }

    return 0;
}
