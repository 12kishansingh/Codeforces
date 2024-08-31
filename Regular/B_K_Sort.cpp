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
vector<int>a(n);
cin>>a;
vector<int>b(n);
int mx=0;
for(int i=0;i<n;i++){
    mx=max(mx,a[i]);
    b[i]=mx;
}
//cout<<b<<endl;
ll sum=0;
ll mm=0;
for(int i=0;i<n;i++){
    ll curr=b[i]-a[i];
    sum+=curr;
    mm=max(mm,curr);
}
cout<<sum+mm<<endl;

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