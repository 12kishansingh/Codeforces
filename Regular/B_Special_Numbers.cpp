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
ll power(ll x, ll y, ll M) {// binary exponentiation
ll res = 1;
x = x % M;
while (y > 0) {
if (y & 1)
res = (res * x) % M;
 
y = y >> 1;
x = (x * x) % M;
}
return res;
}



void solve(){
int n,k;cin>>n>>k;
ll ans=0;
for(int i=0;i<30;i++){
    if(1<<i & k){
        ans+=power(n,i,M);
    }
}
cout<<ans%M<<endl;

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