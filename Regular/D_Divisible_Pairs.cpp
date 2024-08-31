#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) begin(x), end(x)
const int M=1e9+7;
void solve(){
int n,x,y;cin>>n>>x>>y;
map<pair<int,int>,int>m;
vector<int>a(n);
for(auto &x:a)cin>>x;
ll ans=0;
for(int i=0;i<n;i++){
    ll xx=a[i]%x;
    ll yy=a[i]%y;
    ans+=m[{(x-xx)%x,yy}];
    m[{xx,yy}]++;
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