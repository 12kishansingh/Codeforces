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
int n,l,r,x;cin>>n>>l>>r>>x;
vector<ll>a(n);
cin>>a;
int cnt=0;

for(int i=0;i<(1<<n);i++){
    vector<ll>v;
    for(int j=0;j<n;j++){// calculating subsets subsets
        if(((i>>j) & 1))v.push_back(a[j]);
    }
    if(v.size()<=1)continue;
    // for(auto &it:v){
    //     cout<<it<<" ";
    // }cout<<endl;
    ll sum=accumulate(all(v),0LL);
    int diff=abs(*max_element(all(v))-*min_element(all(v)));
   
    if(sum>=l && sum<=r && diff>=x && v.size()>=2){
        cnt++;
    }
}
cout<<cnt<<endl;

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