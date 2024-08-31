#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
int n;cin>>n;
int a[n];
set<int>s;
for(int i=0;i<n;i++){
    cin>>a[i];
    s.insert(a[i]);
}
if(s.size()==1){
    cout<<"YES"<<endl;return;
}
int b[n+1];
a[-1]=1;a[n]=1;
for(int i=0;i<n+1;i++){
    b[i]=(a[i]*a[i-1])/__gcd(a[i],a[i-1]);
}
int c[n];
for(int i=0;i<n;i++){
    c[i]=__gcd(b[i],b[i+1]);
}
for(int i=0;i<n;i++){
    if(c[i]!=a[i]){cout<<"NO"<<endl;return;}
}cout<<"YES"<<endl;
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