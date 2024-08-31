#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
int n;cin>>n;
int a[n];
int b[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
b[0]=a[0];
for(int i=1;i<n;i++){
b[i]=a[i]+b[i-1];// prefix sum 
}
int m;cin>>m;
int q[m];
for(int i=0;i<m;i++){
    cin>>q[i];
    auto it=lower_bound(b,b+n,q[i])-b;
    cout<<it+1<<endl;
}
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

solve();

return 0;
}