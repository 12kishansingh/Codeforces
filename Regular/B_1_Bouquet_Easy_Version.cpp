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
ll n,m;cin>>n>>m;
vector<ll>a(n);
cin>>a;
sort(all(a));
ll ans=0,sum=0;

for(ll l=0,r=0;l<n;){
    while(r<n && a[r]-a[l]<=1 && sum+a[r]<=m){
        sum+=a[r]; r++;
    }
    ans=max(ans,sum);
    sum-=a[l];
    l++;
}
cout<<ans<<endl;

}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int t;
cin>>t;

while(t--){
solve();
}
return 0;
}