#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) begin(x), end(x)
const int M = 1e9 + 7;

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
        cout << it << " ";
    return ostream;
}
const int N=2e5+5;
ll fact[N];
ll modinv[N];
long long power(long long x, long long y, long long M) {
long long res = 1;
x = x % M;
while (y > 0) {
if (y & 1)
res = (res * x) % M;
y = y >> 1;
x = (x * x) % M;
}
return res;
}
ll ncr(ll n,ll r){
 if(r>n|| n<0 || r<0)return 0LL;
 ll numr=fact[n];
 ll invdeno=(modinv[r]*modinv[n-r])%M;
return (numr*invdeno)%M;
}
void precompute(){
     fact[0]=1;modinv[0]=1;
 for(int i=1;i<N;i++){
 fact[i]=(fact[i-1]*i)%M;
 modinv[i]=power(fact[i],M-2,M);
}
}

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    ll ones = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        ones += a[i];
    }

    ll ans = 0;
    for (ll i = k / 2 + 1; i <=  ones; i++) {
        ans += (ncr(ones, i)%M * ncr(n - ones, k-i) % M)%M;
        ans %= M;
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
   precompute();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
