#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
int n;cin>>n;
ll v[n+1];
ll prefix[n+1];
prefix[0]=0;
for(int i=1;i<=n;i++){
cin>>v[i];
prefix[i]=prefix[i-1]+v[i];
}
sort(v+1,v+n+1);
ll sum[n+1];sum[0]=0;
for(int i=1;i<=n;i++){
sum[i]=sum[i-1]+v[i];
}
ll m;cin>>m;
while(m--){
ll t,l,r;
cin>>t>>l>>r;
if(t==1){
    cout<<prefix[r]-prefix[l-1]<<endl;
}
if(t==2){
    cout<<sum[r]-sum[l-1]<<endl;
}
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