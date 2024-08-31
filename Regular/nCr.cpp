#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) begin(x), end(x)
const ll M=1e9+7;

ll fact[200001];
ll modinv[200001];

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
void precomp(){
    fact[0]=1;modinv[0]=1;
    for(int i=1;i<=100000;i++){
        fact[i]=(fact[i-1]*i)%M;
        modinv[i]=power(fact[i],M-2,M);
    }
    // tc---- o(n*log(mod));
}

ll ncr(ll n,ll r){
    if(r>n|| n<0 || r<0)return 0;
    ll numr=fact[n];
   // ll deno=(fact[r]*fact[n-r])%M;
   ll invdeno=(modinv[r]*modinv[n-r])%M;// to reduce the overall  tc to o(n)*log(mod)+ O(query)
    // numr/deno
   // ll deno_inv=power(deno,M-2,M); // tc-> O(log(mod)
    return (numr*invdeno)%M;
    // tc-> O(log(mod)) to o(1);
}

// O(n)for precomputation + log(mid)*o(Query);
void solve(){
precomp();
ll n,r;cin>>n>>r;
//cout<<ncr(n,r)<<endl;// for each i query use this method of precomputation
// if we've to calculate only once then use the following
ll ans=1;
for(int i=1;i<=min(r,n-r);i++){
    ans=(ans*(n-i+1))/i;
}
cout<<ans<<endl;
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

