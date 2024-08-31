#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) begin(x), end(x)
const int M=1e9+7;
void solve(){
ll n,a,b;cin>>n>>a>>b;
if(a>=b){
    cout<<n*a<<endl;return;
}
 if(n<=(b-a)){
    ll ans=b*n-((n-1)*n)/2;
    cout<<ans<<endl;
    return;
}

    ll ans=(b*(b+1))/2;
    ans-=(a*(a+1))/2;
    n-=(b-a);
    cout<<(ans+n*a)<<endl;
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