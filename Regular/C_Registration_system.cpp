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
map<string,int>mp;
while(n--){
string s;
cin>>s;
int f=1;
auto it=mp.find(s);
if(it!=mp.end() && it->second>0){
    cout<<s+to_string(it->second)<<endl;
    f=0;
}

// for(auto x:mp){
//     if(x.first==s && x.second>0){
//         cout<<s+to_string(x.second)<<endl;
//         f=0;
//         break;
//     }   
// }

mp[s]++;
if(f)cout<<"OK"<<endl;

}

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