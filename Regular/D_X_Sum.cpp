#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;

int sum(vector<vector<int>>& a, int x, int y) {
    int i = a.size();
    int j = a[0].size();
    int cnt = a[x][y];
    int tx, ty;

    // down left
    tx = x + 1;
    ty = y + 1;
    while (tx < i && ty < j) {
        cnt += a[tx][ty];
        tx++;
        ty++;
    }

    // down right
    tx = x + 1;
    ty = y - 1;
    while (tx < i && ty >= 0) {
        cnt += a[tx][ty];
        tx++;
        ty--;
    }

    // up left
    tx = x - 1;
    ty = y + 1;
    while (tx >= 0 && ty < j) {
        cnt += a[tx][ty];
        tx--;
        ty++;
    }

    // up right
    tx = x - 1;
    ty = y - 1;
    while (tx >= 0 && ty >= 0) {
        cnt += a[tx][ty];
        tx--;
        ty--;
    }

    return cnt;
}

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int s = sum(a, i, j);
            ans = max(ans, s);
        }
    }
    cout << ans << endl;
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
