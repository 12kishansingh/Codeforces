#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;

void solve(){
ll n;cin>>n;
ll a[n];int even=0,odd=0;
for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]%2)odd++;
    else even++;
}
if(even>0&& odd>0){
    cout<<2<<endl;return;
}
ll k=2;
while(1){
    set<ll>s;
    for(ll i=0;i<n;i++){
        s.insert(a[i]%k);
    }
    if((ll)s.size()==2){
        break;
    } 
    k*=2;
}cout<<k<<endl;
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