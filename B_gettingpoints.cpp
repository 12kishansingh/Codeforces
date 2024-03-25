#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
bool check(ll mid,ll n,ll p ,ll l ,ll t){
  ll task=ceil(n/7.0);
    ll P=1ll*mid*l+min(task,1ll*2*mid)*1ll*t;
     return P>=p; 
}
void solve(){
ll n,p,l,t;
cin>>n>>p>>l>>t;
ll low=0,h=n;
for(int i=0;i<100 && low<=h;i++){
 if(low<=h){
        ll mid=low+(h-low)/2;
        if(check(mid,n,p,l,t)){
            h=mid;
        }
        else{
            low=mid;
        }
    }
}
cout<<(n-h)<<endl;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int tc;
cin>>tc;

while(tc--){
solve();
}
return 0;
}
