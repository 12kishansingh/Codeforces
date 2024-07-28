#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) begin(x), end(x)
const int M=1e9+7;
template <typename T> // cin >> vector<T>
istream &operator>>(istream &istream, vector<T> &v)
{
for (auto &it : v)
cin >> it;
return istream;
}
template <typename T> // cout << vector<T>
ostream &operator<<(ostream &ostream, const vector<T> &c)
{
for (auto &it : c)
cout << it <<" ";
return ostream;
}


void solve(){
 int n, m, k;
    cin >> n >> m >> k;

    vector<long long> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    vector<int> l(m + 1), r(m + 1);
    vector<long long> d(m + 1);
    for (int i = 1; i <= m; i++) {
        cin >> l[i] >> r[i] >> d[i];
    }

    vector<long long> opCount(m + 2, 0);
    for (int i = 0; i < k; i++) {
        int x, y;
        cin >> x >> y;
        opCount[x]++;
        opCount[y + 1]--;
    }

    for (int i = 1; i <= m; i++) {
        opCount[i] += opCount[i - 1];
    }
    vector<long long> diff(n + 2, 0);
    for (int i = 1; i <= m; i++) {
        if (opCount[i] > 0) {
            diff[l[i]] += d[i] * opCount[i];
            diff[r[i] + 1] -= d[i] * opCount[i];
        }
    }
    for (int i = 1; i <= n; i++) {
        diff[i] += diff[i - 1];
        a[i] += diff[i];
    }

    for (int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }

}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int t;
//cin>>t;
t=1;
while(t--){
solve();
}
return 0;
}