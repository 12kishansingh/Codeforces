#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
bool check(ll mid,ll a[],ll k,ll n){
    ll cnt=0;
    for(ll i=n/2;i<n;i++){
        if(a[i]<=mid){
            cnt+=(mid-a[i]);
        }
    }
    return cnt<=k;
}

void search(ll a[],ll n,ll k){
    ll l=1,r=2e9;
    ll ans=-1;
    while(l<=r){
        ll mid=l+(r-l)/2;
        if(check(mid,a,k,n)){
            ans=mid;
            l=mid+1;
        }
        else {
            r=mid-1;
        }
    }
    cout<<ans<<endl;
}
void solve(){
ll n;cin>>n;ll k;cin>>k;
ll a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}sort(a,a+n);
search(a,n,k);

}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int t;cin>>t;
while(t--)
{solve();}

return 0;
}