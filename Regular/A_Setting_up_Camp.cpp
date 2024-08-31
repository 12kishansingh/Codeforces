#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) begin(x), end(x)
const int M=1e9+7;
void solve(){
ll a,b,c;
cin>>a>>b>>c;
if(b<3 && b+c>=3){
b=(b+c);
cout<<int(a+ceil(b/3.0))<<endl;return;
}
ll rem=b%3;
if(rem>0 && rem+c<3){
    cout<<-1<<endl;return;
}
ll ans=(b/3);
c+=rem;
c=ceil(c/3.0);
ans+=(c+a);
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