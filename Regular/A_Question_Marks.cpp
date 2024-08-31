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
string st;cin>>st;
map<char,int>mp;
for(int i=0;i<4*n;i++){
    mp[st[i]]++;
}
int ans=0;
for(auto &x:mp){
    if(x.first>=65 && x.first<=90){
        if(x.second>=n){
            ans+=n;
        }
        else{
            ans+=x.second;
        }
    }
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