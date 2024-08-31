#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
  ll n,k;cin>>n>>k;
  if(n==1){
    cout<<k<<endl;return;
  }
  int ele=0;bool f=0;
  for(int i=31;i>=0;i--){
    
    if(f){
        ele|=(1<<i);
    }
    if((k&(1<<i))){
        f=1;
    }  
  }
  cout<<ele<<" ";
  cout<<abs(k-ele)<<" ";
  for(int i=3;i<=n;i++)cout<<0<<" ";
  cout<<endl;
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