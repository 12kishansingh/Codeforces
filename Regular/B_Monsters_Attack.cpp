#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
int n,k;cin>>n>>k;
vector<pair<int,int>>v(n);
for(int i=0;i<n;i++){
    int x;cin>>x;
    v[i].second=x;
   // v.push_back({i,x});
}
for(int i=0;i<n;i++){
    int y;cin>>y;
    v[i].first=abs(y);
}sort(v.begin(),v.end());
// for(auto x:v){
//     cout<<x.first<<" "<<x.second<<endl;
// }cout<<endl;
ll sum=0;
for(int i=0;i<v.size();i++){
    auto x=v[i].first;
    auto y=v[i].second;
    sum+=y;
    if(sum>1LL*x*k){
        cout<<"NO"<<endl;return;
    }
}cout<<"YES"<<endl;



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