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


ll maxim(int idx,ll &mx,vector<ll>&a,int n){
    if(idx==n){
        return mx;
    }
    mx=max(mx,a[idx]);
   return maxim(idx+1,mx,a,n);
}

void solve(){
int n;cin>>n;
vector<ll>a(n);
cin>>a;
ll mx=INT_MIN;
cout<<maxim(0,mx,a,n);

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