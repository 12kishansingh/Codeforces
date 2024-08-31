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
void com(int i,int n,int r,ll &ans){
    if(i>r){
        return;
    }
    ans=(1LL*ans*(n-i+1))/i;
    return com(i+1,n,r,ans);

}
void solve(){
int n,r;cin>>n>>r;
if(r>n){
    cout<<0<<endl;return;
}
r=min(r,n-r);
ll ans=1;
 com(1,n,r,ans);
cout<<ans<<endl;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
solve();

return 0;
}