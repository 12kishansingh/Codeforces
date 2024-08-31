#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
int p,q,l,r;cin>>q>>q>>l>>r;
vector<pair<int,int>>vp1;
while(p--){
    int a,b;cin>>a>>b;
    vp1.push_back({a,b});
}
vector<pair<int,int>>vp2;
while(q--){
    int c,d;cin>>c>>d;
    vp2.push_back({c,d});
}
vector<bool>v(2001,false);
for(int i=0;i<vp1.size();i++){
    auto l1=vp1[i].first;
    auto r1=vp1[i].second;
    for(int j=l1;j<r1;j++){
        v[i]=true;
    }
}
for(int i=0;i<vp2.size();i++){
    auto l1=vp2[i].first;
    auto r1=vp2[i].second;
    for(int j=l1;j<r1;j++){
        v[i]=true;
    }
}int ans=0;
for(int i=l;i<r;i++){
    ans+=v[i] || v[i-1];
}
cout<<ans<<endl;

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









