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
ll power(ll x, ll y) {// binary exponentiation
ll res = 1;

while (y > 0) {
if (y & 1)
res = (res * x);// for long (res*x*1ll)%M
 // res=add(res,x); if m is very large;
y = y >> 1;//right shift
x = (x * x);
// x=add(x,x); if M <=1e18
}
return res;
}




void solve(){
int x;int n;cin>>x>>n;
cout<<power(x,n)<<endl;
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