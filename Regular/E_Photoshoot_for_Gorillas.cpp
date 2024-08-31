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
int n,m,k;cin>>n>>m>>k;
int w;cin>>w;
vector<int>a(w);
cin>>a;

vector<int>v(n*m);
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
    int lbx=max(0,i-k+1);
    int ubx=min(i,n-k);
    int lby=max(0,j-k+1);
    int uby=min(j,m-k);
    int num=(ubx-lbx+1)*(uby-lby+1);
    v.push_back(num);
}}
sort(all(v),greater<int>());
sort(all(a),greater<int>());
// maxheight* no of cells
ll ans=0;
for(int i=0;i<w;i++){
    ans+=1LL*(a[i]*v[i]);
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