#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
int n;cin>>n;
int k[n];
for(int i=0;i<n;i++){
    cin>>k[i];
}
vector<int>ans;int j=0;
while(n--){int m[k[j]];
int curr=15*k[j];
    for(int i=0;i<k[j];i++){
         cin>>m[i];
         curr+=(m[i]*5);
    }ans.push_back(curr);j++;
}
// for(auto x:ans){
//     cout<<x<<" ";
// }
sort(ans.begin(),ans.end());
cout<<ans[0]<<endl;
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