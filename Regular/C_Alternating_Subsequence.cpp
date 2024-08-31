#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
 
ll bottomup(ll arr[],int n)
{
     ll dp[n+1][2];
    for(int i=0;i<=n;i++){
        dp[i][0]=LLONG_MIN;
        dp[i][1]=LLONG_MIN;
    }
    ll prevneg=0,prevpos=0;
    for(int i=1;i<=n;i++){
      if(arr[i]<0){
         dp[i][1]=max(dp[i-1][1],arr[i]+prevpos);prevneg=dp[i][1];
      }else{
          dp[i][0]=max(dp[i-1][0],arr[i]+prevneg);prevpos=dp[i][0];
      } 
    } 
  //  return dp[n][1];
    return max(dp[n][0],dp[n][1]);
}
void solve(){
int n;cin>>n;
ll a[n+1];
//vector<int>dp(200005,-1);
for(int i=1;i<=n;i++){
    cin>>a[i];
}
//cout<<recur(a,n,1,dp)<<endl;
cout<<bottomup(a,n)<<endl;

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