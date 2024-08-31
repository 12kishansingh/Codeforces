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
map<int,int>m;
for(int i=0;i<n;i++){
    int x;cin>>x;
    m[x]++;
}
int q=0,two=0,four=0,six=0,eight=0;
cin>>q;

for(auto x:m){
if(x.second==4|| x.second==5){
    four++;
}
if(x.second==2 || x.second==3){
    two++;
}
if(x.second==6 || x.second==7){
    six++;
}
else {
    eight++;
}
}
while(q--){
    char ch;int x;
    cin>>ch>>x;
    

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
