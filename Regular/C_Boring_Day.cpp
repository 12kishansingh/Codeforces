#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) begin(x), end(x)
const int M = 1e9+7;

template <typename T> // cin >> vector<T>
istream &operator>>(istream &istream, vector<T> &v) {
    for (auto &it : v)
        cin >> it;
    return istream;
}

template <typename T> // cout << vector<T>
ostream &operator<<(ostream &ostream, const vector<T> &c) {
    for (const auto &it : c)
        cout << it << " ";
    return ostream;
}

void solve() {
    int n; cin >> n;
    int l, r; cin >> l >> r;

    vector<int> a(n);
    cin >> a;

    int sum = 0, cnt = 0;

    int i=0,j=0;
    while(i<n){
        while(j<n && sum<l){
            sum+=a[j];
            j++;
        }
        if(l<=sum && sum<=r){
            cnt++;
            i=j;
            sum=0;
        }
        else{
            sum-=a[i];i++;
        }
    }

    cout << cnt << endl;
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
