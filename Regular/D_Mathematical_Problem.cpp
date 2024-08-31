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

ll a[25];
void solve(){
int n;cin>>n;
string s;cin>>s;

if(n==2){
    int num=stoi(s);
    cout<<num<<endl;return;
}
// for(int i=0;i<n;i++){ 
//     if(n>2 &&s[i]=='0')cout<<0<<endl;return;
// }
ll ans=INT_MAX;
for(int i=0;i<n-1;i++){
    ll cnt=0;
    for(int j=0;j<n;j++){
        if(j==i){
            a[cnt++]=10*(s[j]-'0')+(s[j+1]-'0');
            j++;
        }
        else{
            a[cnt++]=(s[j]-'0');
        }
    }
    ll val=0;
    for(int j=0;j<cnt;j++){
        if(a[j]==0){
            val=-1;break;
        }
        if(a[j]==1){
            continue;
        }

        val+=a[j];
    }
    if(!val)val=1;
    if(val==-1)val=0;
    ans=min(ans,val);
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