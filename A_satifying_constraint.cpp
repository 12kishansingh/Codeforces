#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
int n;cin>>n;

    ll i=INT_MIN;ll j=INT_MAX;
    vector<ll>v;
while(n--){
    ll a,x;
    cin>>a>>x;
    if(a==1)i=max(i,x);
    if(a==2)j=min(j,x);
    if(a==3)v.push_back(x);

}if(j<i){
    cout<<0<<endl;return;
    }
else{
    ll ans=j-i+1;
    for(auto x:v){
        if(x>=i && x<=j){
            ans--;
        }
    }
    cout<<ans<<endl;

}


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
