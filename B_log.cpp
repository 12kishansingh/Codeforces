#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
bool check(ll mid, ll n){
    ll sum=mid*(mid+1)/2;
    return sum<=n;
}
void solve(){
ll n;
cin>>n;
ll l=0,h=1e10+200;
for(int i=0;i<50 && l<=h;i++){
    if(l<=h){
        ll mid=l+(h-l)/2;
        if(check(mid,n+1)){
            l=mid;
        }
        else {
            h=mid;
        }
    }
}
cout<<n+1-l<<endl;
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
