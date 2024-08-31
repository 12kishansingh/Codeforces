#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) begin(x), end(x)
const int M=1e9+7;
template <typename T> // cin >> vector<T>
istream &operator>>(istream &istream, vector<T> &v) {
    for (auto &it : v)
        cin >> it;
    return istream;
}
template <typename T> // cout << vector<T>
ostream &operator<<(ostream &ostream, const vector<T> &c) {
    for (auto &it : c)
        cout << it << " ";
    return ostream;
}

ll mx = LLONG_MIN; 

void recur(int i, int j, vector<vector<ll>>& a, ll sum) {
    int n = a.size(); // row
    int m = a[0].size(); // column

   
    sum += a[i][j];

    if(i == n - 1 && j == m - 1) {
        mx = max(mx, sum); 
        return;
    }

    if(i < n - 1) {
        recur(i + 1, j, a, sum);
    }
    if(j < m - 1) {
        recur(i, j + 1, a, sum);
    }
}

void solve() {
    int n, m;
    cin >> n >> m;

    vector<vector<ll>> v(n, vector<ll>(m));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> v[i][j];
        }
    }

    ll sum = 0;
    recur(0, 0, v, sum);
    cout << mx << endl; 
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    //cin>>t;
    t = 1;
    while(t--) {
        solve();
    }

    return 0;
}
