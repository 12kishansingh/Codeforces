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
int n,k;cin>>n>>k;
if(k>n){
    cout<<"NO"<<endl;return;
}

stack<int>s;
map<int,int>m;
for(int i=0;i<=30;i++){
    if(n &(1<<i)){
        if(i>0){
            s.push(1<<i);
        }
         m[1<<i]++;
    }
}
int cnt=m.size();

while(cnt<k && !s.empty()){
    int curr=s.top();
    s.pop();
    m[curr]--;
    m[curr/2]+=2;
    if(curr/2>1){
        s.push(curr/2);s.push(curr/2);
    }
    cnt++;
}
if(cnt<k || cnt>k){
    cout<<"NO"<<endl;return;
}
cout<<"YES"<<endl;
for(auto &x:m){
    //cout<<x.first<<" "<<x.second<<endl;
    for(int i=0;i<x.second;i++){
        cout<<x.first<<" ";
    }
}cout<<endl;

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