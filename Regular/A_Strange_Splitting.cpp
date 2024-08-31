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
vector<int>a(n);set<int>s;

for(int i=0;i<n;i++){
    cin>>a[i];
    s.insert(a[i]);
}
if(s.size()==1){
    cout<<"NO"<<endl;return;
}
cout<<"YES"<<endl;
for(int i=0;i<n;i++){
    if(i==0)cout<<'R';
    else cout<<'B';
}cout<<endl;
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