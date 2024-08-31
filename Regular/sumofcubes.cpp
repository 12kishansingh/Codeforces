#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
bool check(ll x,ll a,ll b){
 return x==(a+b);
}
void search(vector<ll>a,ll n,ll val){
    ll l=1,r=n;
    while(l<=r){
        ll mid=l+(r-l)/2;
        ll a=mid*mid*mid;
        ll b=val-a;
        if(check(val,a,b)){
            cout<<"YES"<<endl;return;
        }
        else if(val<a[mid]){
            r=mid-1;
        }
        else {
            l=mid+1;
        }
    }
    cout<<"NO"<<endl;
}

void solve(){
ll x;
cin>>x;
ll n=1e12;
vector<ll>s(n);
for(ll i=1;i*i*i<=n;i++){
    ll x=(i*i*i); 
    s.push_back(x); 
}
search(s,n,x);
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