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
int n;cin>>n;

vector<int>a(n+1);

for(int i=1;i<=n;i++){
    cin>>a[i];
}
vector<int>cnt(n+2,0);
cnt[a[1]]=1;
int f=1;
for(int i=2;i<=n;i++){
if(cnt[a[i]-1] || cnt[a[i]+1]){
    cnt[a[i]]=1;
}
else{
f=0;break;
}
}
if(f)cout<<"YES"<<endl;
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