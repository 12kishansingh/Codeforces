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

bool check(ll n){
    string s=to_string(n);

    for(int i=0;i<s.size();i++){
        ll x=s[i]-'0';
        if(x!=0 && n%x!=0){
            return false;
        }
    }
    return true;
}

void solve(){
    ll n;cin>>n;

    for(ll i=n;i<=1e18;i++){
        if(check(i)){
            cout<<i<<endl;return;
        }
    }

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