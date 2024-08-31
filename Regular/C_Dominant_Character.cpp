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
vector<pair<int,int>>v(16);
for(int i=0;i<16;i++){
    cin>>v[i].first;
    v[i].second=i;
}
sort(v.begin(),v.end());
vector<int>ans(16);
for(int i=0;i<16;i++){
    if(i==0){
        ans[v[i].second]=0;
    }
    else if(i<=2){
        ans[v[i].second]=2;
    }
    else if(i<=14){
        ans[v[i].second]=3;
    }
    else{
        ans[v[i].second]=4;
    }

}
for(int i=0;i<16;i++){
    cout<<ans[i]<<" ";
}
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int t;
cin>>t;
t=1;
while(t--){
solve();
}
return 0;
}