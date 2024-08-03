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
ll check(ll n){
    if(n==0){
        return 0;
    }
    return n+check(n/2);

}

void solve()
{
    ll n;
    cin >> n;
    ll ans = 0;
    for (int i = 0; i < 60; i++)
    {
        if ((n & 1LL << i))
        {
            ans += (1LL << (i + 1)) - 1;//cout<<ans<<" ";
        }
    }//cout<<endl;
    cout << ans << endl;
    // or cout<<check(n)<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}