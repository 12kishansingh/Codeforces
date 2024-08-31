#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
ll n;cin>>n;ll m;cin>>m;
ll cnt=0;
for(ll i=1;i<=n;i++){
    for(ll j=1;j<=m;j++){
        cnt+=((i+j)%(1LL*j*(__gcd(i,j)))==0)? 1: 0;
    }
}
cout<<cnt<<endl;
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