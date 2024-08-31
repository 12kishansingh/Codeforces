#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) begin(x), end(x)
const int M=1e9+7;
void solve(){
ll n;cin>>n;
ll ans=0;
for(int i=1;i<n+1;++i){
    ll l=-1;
    ll r=n+5;
    while(r-l>1){
        ll mid=(l+r)/2;
        if((1LL*i*i+1LL*mid*mid)<1LL*n*n){
            l=mid;
        }
        else{
            r=mid;
        }
    }
    ll min_x=r;
    l=-1;
    r=n+5;
    while(r-l>1){
        ll mid=(l+r)/2;
        if((1LL*i*i+1LL*mid*mid)<1LL*(n+1)*(n+1)){
            l=mid;
        }
        else{
            r=mid;
        }
    }
    ll max_x=l;
    ans+= (max_x-min_x+1);
}
cout<< ans*4 <<endl;
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
long long power(long long x, long long y, long long M) {// binary exponentiation
long long res = 1;
x = x % M;//if x is 1e18
while (y > 0) {
if (y & 1)
res = (res * x) % M;// for long (res*x*1ll)%M
 // res=add(res,x); if m is very large;
y = y >> 1;//right shift
x = (x * x) % M;
// x=add(x,x); if M <=1e18
}
return res;
}
