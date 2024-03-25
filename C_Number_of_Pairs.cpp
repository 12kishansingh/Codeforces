#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
ll n,l,r;cin>>n>>l>>r;
vector<ll>v(n);
for(auto &x: v)cin>>x;
sort(v.begin(),v.end());
ll sum=0;
for(int i=0;i<n-1;i++){
auto up=upper_bound(v.begin()+i+1,v.end(),r-v[i]);
auto lo=lower_bound(v.begin()+i+1,v.end(),l-v[i]);
sum+=(up-lo);
}
cout<<sum<<endl;
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