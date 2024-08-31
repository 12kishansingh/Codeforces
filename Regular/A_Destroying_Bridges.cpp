#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
int n;cin>>n;
int k;cin>>k;
int b=n*(n-1)/2;
if(b==k || n==k){
    cout<<1<<endl;
}
if(k=0){
    cout<<n<<endl;
}


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