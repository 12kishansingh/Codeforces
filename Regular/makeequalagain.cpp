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
    cout<<0<<endl;
    return;
}
int c1=0,c2=0;
for(int i=0;i<n;i++){
    if(a[i]==a[0])c1++;
    else break;
}
for(int i=n-1;i>=0;i--){
    if(a[i]==a[n-1])c2++;
    else break;
}
if(a[0]==a[n-1]){
    cout<<n-(c1+c2)<<endl;
}
else {
    cout<<min(n-c1,n-c2)<<endl;
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
