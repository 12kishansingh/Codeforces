#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) begin(x), end(x)
const int M=1e9+7;

void solve(){
int h,n;cin>>h>>n;
vector<int>a(n),c(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<n;i++){
    cin>>c[i];
}
for(int i=0;i<n;i++){
    h-=a[i];
}
if(h<=0){
    cout<<1<<endl;return;
}
ll l=0,r=1e18,ans=0;
while(l<=r){
    ll mid=(l+r)>>1;
     ll s=0;
    for(int i=0;i<a.size();i++){
        s+=(mid/c[i])*a[i];
        if(h-s<=0){
            
        }
    }
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