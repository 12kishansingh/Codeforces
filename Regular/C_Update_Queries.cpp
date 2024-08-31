#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) begin(x), end(x)
const int M=1e9+7;
void solve(){
int n,m;cin>>n>>m;
string s;cin>>s;
vector<int>ind(m);
for(auto &x:ind)cin>>x;
string c;cin>>c;

set<int> idx(all(ind));
vector<int> idx1(idx.begin(),idx.end());
sort(idx1.begin(),idx1.end());
sort(all(c));
 map<int, char> mp;
        for (size_t i = 0; i < idx1.size(); ++i) {
            mp[idx1[i]] =c[i];
        }
        for (const auto &x : mp) {
            s[x.first - 1] = x.second;
        }
cout<<s<<endl;
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