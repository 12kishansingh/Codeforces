#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
bool check(vector<ll>v,ll dis,ll c){
    ll cc=1;
    ll prev=v[0];
    for(int i=1;i<v.size();i++){
    ll diff=v[i]-prev;
    if(diff>=dis){
        cc++;
        prev=v[i];
    }
    else{
        continue;
    }
    }
    return cc>=c;
    
}
void solve(){
ll n,c;cin>>n>>c;
vector<ll>v(n);
for(auto &x:v)cin>>x;
ll l=0,h=1e12;
ll ans=0;
for(int i=0;i<80 && l<=h;i++){
    if(l<=h){
        ll mid=l+(h-l)/2;//
        if(check(v,mid,c)){
            ans=mid;
            l=mid;
        }
        else {
            h=mid;
        }
    }
}
cout<<ans<<endl;
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