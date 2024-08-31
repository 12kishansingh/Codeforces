#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
ll k,l;cin>>k>>l;
int ans=-1;ll temp=k;
while(k<=l){
    ans++;
    if(k==l){
        cout<<"YES"<<endl<<ans<<endl;return;
    }
    k*=temp;
}cout<<"NO"<<endl;
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