#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
bool check(ll a[],ll n,ll mid,ll k){
    ll sum=0,cnt=0;
    bool f=false;
    for(int i=1;i<n;i++){
        if(a[i]>mid)f=true;
        if(a[i]+sum<=mid)sum+=a[i];
        else {cnt++;sum=a[i]; }   
    }
    if(sum>0 && sum<=mid){cnt++;}
    return (cnt<=k) && (f==false);
}
void solve(){
ll n,k;cin>>n>>k;
ll a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
ll l=0,r=1e18;
ll ans=0;
//for(int i=0;i<80&& l<r;i++){
    while(l<=r){
        ll mid=l+(r-l)/2;
        if(check(a,n,mid,k)){
            ans=mid;
            r=mid-1;
        }
        else {
            l=mid+1;
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
