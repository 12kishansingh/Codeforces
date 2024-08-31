#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
int a,b,l;cin>>a>>b>>l;
//int ans=sqrt(l);
set<ll>s;
if(l%a!=0 && l%b!=0){
    cout<<1<<endl;
    return;
}
ll x=(int)log(l)/log(a);
ll y=(int)log(l)/log(b);
for(int i=0;i<=x+2;i++){
    for(int j=0;j<=y+2;j++){
        ll A=pow(a,i);
        ll B=pow(b,j);
        ll p=A*B;
        if(l>=p && l%(p)==0){
            s.insert(p);
        }
    }
}
cout<<s.size()<<endl;

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