#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) begin(x), end(x)
const int M=1e9+7;
void solve(){
int n;cin>>n;
vector<pair<int,int>>v1;

while(n--){
    int a,b;cin>>a>>b;
    v1.push_back({a,1});
    v1.push_back({b,-1});
}
sort(v1.begin(),v1.end());
int ans=INT_MIN, cnt=0;
for(auto &x:v1){
cnt+=x.second;
ans=max(cnt,ans);
}
cout<<max(ans,cnt)<<endl;


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