#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) begin(x), end(x)
const int M=1e9+7;
void solve(){
ll n;cin>>n;
vector<int>a(n);
for(auto &x:a)cin>>x;

ll sum=0, mx=INT_MIN;
for(int i=0;i<n;i++){
sum+=a[i];
if(mx<=sum){
    mx=max(sum,mx);
}
if(sum<0){
    sum=0;
}
}
cout<<mx<<endl;

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