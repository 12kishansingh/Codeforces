#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) begin(x), end(x)

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

void solve() {
    ll n, d;
    cin >> n >> d;
    vector<pair<ll, ll>> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i].first >> v[i].second; 
    }
    sort(all(v));

    ll mx = 0;
    ll curr = 0;
    int j = 0;
    ll st=0;

  //  for(auto &x:v)cout<<x.first<<" "<<x.second<<endl;
    for (int i=0;i<n;i++) {
        curr += v[i].second;
        while (v[i].first-v[j].first>=d) {
            curr -= v[j].second;
            j++;
        }
        mx= max(mx, curr);
        //st=x.first;
    }

    cout << mx<< endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}
