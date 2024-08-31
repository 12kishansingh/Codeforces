#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve(){
  ll n;cin>>n;
  ll arr[n];map<int,int>cnt;
  for(int i=0;i<n;i++)cin>>arr[i],cnt[arr[i]]++;
  set<int>check1,check2;
  for(int i=0;i<=n;i++){
    check1.insert(i);check2.insert(i);
  }
  int pre[n],post[n];
  for(int i=0;i<n;i++){ 
    auto it=check1.find(arr[i]);
    if(it!=check1.end()){
        check1.erase(it);
    }
    pre[i]=*check1.begin();
  }  
  for(int i=n-1;i>=0;i--){
    auto it=check2.find(arr[i]);
    if(it!=check2.end()){
        check2.erase(it);
    }
    post[i]=*check2.begin();
  }int ini=-1,fin=-1;
  for(int i=0;i<n;i++){
    if(i+1<n && pre[i]==post[i+1]){
         ini=i+1;fin=i+2;
    }
  }
  if(ini==-1){cout<<-1<<endl;return;}
  cout<<2<<endl;
  cout<<1<<" "<<ini<<endl<<fin<<" "<<n<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;cin>>tc;
    while(tc--)
    {
        solve();
    }
}