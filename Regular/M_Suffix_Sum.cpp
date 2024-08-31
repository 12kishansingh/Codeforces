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
void suff(vector<int>&a,int m,int n,int i,ll &sum){
    
    if(i<n-m){
        return;
    }
   // cout<<i<<endl;
    sum+=a[i];
   suff(a,m,n,i-1,sum);
    
}

void solve(){
int n;cin>>n;int m;cin>>m;;
vector<int>a(n);
cin>>a;
ll sum=0;
suff(a,m,n,n-1,sum);
cout<<sum<<endl;
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