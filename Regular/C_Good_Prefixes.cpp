#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) begin(x), end(x)
const int M=1e9+7;
void solve(){
int n;cin>>n;
ll a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
ll mx=0;
ll ans=0;
ll sum=0;
for(int i=0;i<n;i++){
    mx=max(a[i],mx);
    sum+=a[i];
    if((sum-mx)==mx){
        ans++;
    }
}cout<<ans<<endl;
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