#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
int n;cin>>n;
int a[5]={1,3,6,10,15};
ll ans=0;
if(n>=15){
    ans+=(n/15-1);
    n=15+n%15;
} 
int dp[n+1];
for(int i=0;i<=n;i++)dp[i]=INT_MAX;
dp[0]=0;
for(int i=1;i<=n;i++){
   for(int j=0;j<5;j++)
   {
      if(i-a[j]>=0){
          
          dp[i]=min(dp[i],dp[i-a[j]]+1);
      }
   }
}
cout<<ans+dp[n]<<endl;
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