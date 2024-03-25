#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
int k;cin>>k;
int n;cin>>n;
vector<ll> a(n);
for(auto &x:a)cin>>x;
int sum=0;int sum1=0;
for(int i=0;i<n;i++){
sum+=a[i]/k;
sum1+=a[i]%k;
}sum1=sum1/k;
cout<<sum+sum1<<endl;
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