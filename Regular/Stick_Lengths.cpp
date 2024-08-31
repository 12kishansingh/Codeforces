#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) begin(x), end(x)
const int M=1e9+7;
void solve(){
int n;cin>>n;
vector<int>a(n);
for(auto &x:a)cin>>x;
sort(all(a));
ll x=n/2;
ll sum=0;
for(int i=0;i<n;i++){
    sum+=(abs(a[i]-a[x]));
}
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