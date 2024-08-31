#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) begin(x), end(x)
const int M=1e9+7;

void solve(){
int n;cin>>n;
vector<ll>k(n),ans(n);
for(int i=0;i<n;i++){
    cin>>k[i];
}
ll l=1;
for(int i=0;i<n;i++){
    ll g=__gcd(l,k[i]);
    l=(l*k[i])/g;
}//cout<<l<<endl;
ll sum=0;
for(int i=0;i<n;i++){
sum+=l/k[i];
ans.push_back(l/k[i]);
}
if(l<=sum){
   cout<<-1<<endl;return;
}
    for(int i=n;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }cout<<endl;


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