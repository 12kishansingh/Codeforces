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
bool recur(ll &val,ll n){

    if(val==n){
        return true;
    }
    else if(val>n){
        return false;
    }
ll t=val*10,t2=val*20;
    if(recur(t,n))return true;
    if(recur(t2,n))return true;
    return false;
}

void solve(){
ll n;cin>>n;
ll val=1;
if(recur(val,n))cout<<"YES"<<endl;
else cout<<"NO"<<endl;

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