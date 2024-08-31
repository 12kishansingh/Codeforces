#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) begin(x), end(x)
const int M=1e9+7;
template <typename T> // cin >> vector<T>
istream &operator>>(istream &istream, vector<T> &v)
{
for (auto &it : v)
cin >> it;
return istream;
}
template <typename T> // cout << vector<T>
ostream &operator<<(ostream &ostream, const vector<T> &c)
{
for (auto &it : c)
cout << it <<" ";
return ostream;
}


void solve(){
int n;cin>>n;
vector<int>a(n);
cin>>a;
map<int,int>mp;
for(int i=0;i<n;i++){
    mp[a[i]]++;
}
int ans=0;
if(n==1 && a[0]!=1){
cout<<1<<endl;return;
}
for(auto x:mp){
    if(x.second>x.first){
        ans+=(x.second-x.first);
    }
    else if(x.second<x.first){
        ans+=x.second;
    }
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