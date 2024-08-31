#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<pair<int, int>> events;
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        events.push_back({a, 1});  
        events.push_back({b, -1}); 
    }

    sort(events.begin(), events.end());

    int cnt = 0, ans = 0;
    for (auto event : events) {
        cnt += event.second;
        ans = max(ans, cnt);
    }

    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}
