#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
bool cmp(pair<ll,ll>a,pair<ll,ll>b)
{
    if(a.second==b.second){return a.first<b.first;}
   return a.second>b.second;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int t;
cin>>t;

while(t--){
 ll n;cin>>n;ll arr[n+1];
 for(int i=1;i<=n;i++)cin>>arr[i];
 vector<pair<ll,ll>>brr;
 for(int i=1;i<=n;i++){
     pair<int,int>a={i,arr[i]+i};
     brr.push_back(a);
 }
 sort(brr.begin(),brr.end(),cmp);
 set<int>ans;
 set<pair<int,int>>check;
 for(int i=0;i<n;i++)
 {
    if(check.size()==0){
        check.insert(brr[i].first,1);
    }    
 }
 for(auto i:ans)cout<<i<<" ";cout<<endl;
}
return 0;
}