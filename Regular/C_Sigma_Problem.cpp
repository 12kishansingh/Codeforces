#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) begin(x), end(x)
const int M = 1e8;  
void solve()
{
    ll n;
    cin >> n;
    vector<ll>a(n);
    ll x = n - 1;
    ll sum=0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    } 
        sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
       int ind = lower_bound(all(a),M-a[i])-a.begin();
       sum+=((n-1-ind)*a[i] + (a[i]*ind)%M);
    }
     cout<<sum<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    // cin>>t;
    t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}