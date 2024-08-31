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
if(n==1){
    cout<<1<<endl;return;
}
sort(a,a+n);
int M=ceil(n/2.0);
int mid=a[M-1];
int cnt=0;

for(int i=M-1;i<n;i++){
    if(a[i]==mid)cnt++;
}cout<<cnt<<endl;
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