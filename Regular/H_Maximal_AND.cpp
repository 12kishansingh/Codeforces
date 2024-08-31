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
int n;cin>>n;int k;cin>>k;
vector<ll>a(n);
cin>>a;
ll ans=0;
for(int i=30;i>=0;i--){
    ll need=0;// count of unset bits 
    for(int j=0;j<n;j++){
        if(((1<<i) & a[j])==0)need++;
    }
    if(need>k)continue;
    ans|=(1<<i);
    k-=need;
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