#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
int n;cin>>n;
if(n&1){
    for(int i=0;i<n;i++){
        if(i!=n-1)cout<<1<<" ";
        else cout<<1;
    }cout<<endl;
}
else{
    cout<<1<<" "<<3;
    for(int i=0;i<n-2;i++){
        if(i==0 && i!=n-3)cout<<" "<<2<<" ";
        else if(i!=n-3)cout<<2<<" ";
        else cout<<2;
    }cout<<endl;
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