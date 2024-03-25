#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
bool check(ll mid,ll w ,ll h, ll n){
ll row=mid/h;
ll col=mid/w;
ll N=row*col;
return N>=n;
}
void solve(){
ll w,h,n;cin>>w>>h>>n;
ll l=0,r=1;
ll ans=0;
while(check(r,w,h,n)==false){
    r*=2;//there will be no overflow of answer now
}
for(int i=0;i<100 && l<=r;i++){
    if(l<=r){
        ll mid=l+(r-l)/2;
        if(check(mid,w,h,n)){
            ans=mid;
            r=mid-1;
        }
        else {
            l=mid+1;
        }
    }
   // cout<<l<<" "<<r<<endl;
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
