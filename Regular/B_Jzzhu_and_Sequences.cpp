#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll M=1e9+7;
void solve(){
// ll x,y;cin>>x>>y;
// ll n;cin>>n;
// if(x==0 &&y==0){cout<<0<<endl;return;}
// ll a[6]={x,y,y-x,-x,-y,x-y};
// ll ans=(n-1)%6;
// ans=(a[ans]%M+M)%M;
// cout<<ans<<endl;
string s;cin>>s;
int curr=0,Max=0;
for(int i=0;i<s.length();i++){
    if(s[i]=='('){
        curr++;
    }else if(s[i]==')'){
     curr--;
    }
    Max=max(Max,curr);
}cout<<Max<<endl;

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