#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
string s;cin>>s;
ll n=s.length();
ll cnt=0,ans=0;
for(ll i=0;i<n;i++){
if(s[i]=='1'){
    cnt++;
}
else{
    if(cnt>0){
        ans+=(cnt+1);
    }
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