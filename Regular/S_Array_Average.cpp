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
void avg(vector<ll>a,int n,ll &ans,int i)
{
    if(i>=n){
        return;
    }
    ans+=a[i];
    avg(a,n,ans,i+1);
}

void solve(){
int n;cin>>n;
vector<ll>a(n);
cin>>a;
ll ans=0;
avg(a,n,ans,0);
double p=static_cast<double>(ans)/n;

cout<<fixed<<setprecision(6)<<p;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

solve();

return 0;
}