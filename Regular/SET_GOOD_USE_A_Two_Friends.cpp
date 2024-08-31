#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
int n;cin>>n;
int p[n];
for(int i=1;i<=n;i++){
    cin>>p[i];
}int ans=4;
for(int i=1;i<=n;i++){
    set<int>s;
    s.insert(i);
    s.insert(p[i]);
    s.insert(p[p[i]]);
    ans=min(ans,(int)s.size());

}cout<<ans<<endl;

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