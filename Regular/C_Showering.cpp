#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n;
    ll s, m;
    cin >> n >> s >> m;

    vector<pair<ll, ll>> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i].first >> v[i].second;
    }
    v.push_back({m, m});
    sort(v.begin(), v.end());

    ll last = 0;
    for ( auto& it : v) {
        ll free = it.first - last;
        if (free >= s) {
            cout << "YES" << endl;
            return;
        }
        last = it.second;
    }
    
    cout << "NO" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
