#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
int n;cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=1;i<n-1;i++){
    if(a[i-1]<a[i+1]&& a[i]>=2*a[i-1]){
        a[i+1]-=a[i-1];
        a[i]-=2*a[i-1];
        a[i-1]=0;
    }
}int ans=1;
for(int i=0;i<n;i++){
    if(a[i]!=0){
        ans=0;break;
    }
}
if(ans)cout<<"Yes"<<endl;
else cout<<"NO"<<endl;
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
