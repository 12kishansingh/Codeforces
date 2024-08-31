#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
bool check(int mid,vector<int>a,int k){
 // auto it=lower_bound(a.begin(),a.end(),mid)-a.begin();

}
void solve(){
ll n,k;cin>>n>>k;
vector<ll>a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}sort(a.begin(),a.end());
ll ans=0;
if(k==0)ans=a[0]-1;
else ans=a[k-1];
ll cnt=0;
for(int i=0;i<n;i++){
if(a[i]<=ans)cnt++;
}
if(cnt!=k || ans<1)cout<<-1<<endl;
else cout<<ans<<endl;
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