#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) begin(x), end(x)
const int M=1e9+7;
void solve(){
int n;cin>>n;
vector<ll>a(n);
for(auto &x:a)cin>>x;
ll pref[n+1];
pref[0]=a[0];
for(int i=1;i<n;i++){
pref[i]=pref[i-1]+a[i];
}
ll ans=abs(pref[n-1]);
for(int i=0;i<n;i++){
    ll sum=(abs(pref[i])+pref[n-1]-pref[i]);
    ans=max(sum,ans);
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