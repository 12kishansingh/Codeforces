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
ll ans=INT_MAX;
void recur(int i,vector<ll>&a,ll sum,ll total){

if(i>=a.size()){
    ll s1=sum;
    ll s2=total-sum;
    ans=min(ans,abs(s1-s2));// minimize
    return;
}

recur(i+1,a,sum+a[i],total);
recur(i+1,a,sum,total);
}

void solve(){
int n;cin>>n;
vector<ll>a(n);
cin>>a;
ll total=accumulate(all(a),0LL);
recur(0,a,0LL,total);
cout<<ans<<endl;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

solve();

return 0;
}