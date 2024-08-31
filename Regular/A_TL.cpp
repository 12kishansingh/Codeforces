#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
int n,m;cin>>n>>m;
int a[n],b[m];
for(int i=0;i<n;i++){
    cin>>a[i];
}sort(a,a+n);
for(int j=0;j<m;j++){
    cin>>b[j];
}sort(b,b+m);

int ans=a[n-1];
int a0=2*a[0];
if(n!=1 && a0<=ans && b[0]>ans){
    cout<<ans<<endl;
}else if(n==1 && a0<b[0]){
cout<<a0<<endl;
}
else if(a0>=ans && a0<b[0]){
    cout<<a0<<endl;
}
    else{
    cout<<-1<<endl;
}


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