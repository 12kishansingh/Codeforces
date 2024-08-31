#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
int n;cin>>n;

}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
ll x;cin>>x;
ll cnt=1;
for(ll i=1;i*i<=x;i++){
    if(x%i==0 && __gcd(i,x/i)==1){
        cnt=i;
    }
}
cout<<cnt<<" "<<x/cnt;

return 0;
}