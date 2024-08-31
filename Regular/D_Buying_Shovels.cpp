#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
int n;cin>>n;int temp=n;
int k;cin>>k;
if(n==1 || n<k){cout<<1<<endl;return;}
if(k==1){
    cout<<n<<endl;return;
}
if(n%k==0){
    cout<<n/k<<endl;return;
 }
 int f=0;
for(int i=2;i*i<=n;i++){
    if(n%i==0){
        f=1;break;
    }
}
if(!f){
    cout<<n<<endl;return;
}
int ans=n;
for(int i=2;i*i<=n && i<=k;i++){
    if(n%i==0){
        ans=min(ans,n/i);
        if(n/i<=k)ans=min(ans,i); 
    }
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