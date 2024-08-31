#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
bool cmp(pair<int,int>p1,pair<int,int>p2){
    if(p1.first>p2.first)return 1;
    else if(p1.first==p2.first && p1.second==p2.second)return p1.first;
    else if(p1.first==p2.first)return p1.second<p2.second;
    else return 0;
}
void solve(){
int n,m,h;cin>>n>>m>>h;
vector<pair<int,int>>v;
while(n--){
    int t[m+1];
    for(int i=1;i<=m;i++){
        cin>>t[i];
    }
    sort(t+1,t+m+1);
   
    int prefix[m+1];prefix[0]=0;
    for(int i=1;i<=m;i++){
        prefix[i]=prefix[i-1]+t[i];
    }

    int solved=0,sum=0;
    int panelty=0;
    
    for(int i=1;i<=m;i++){
     sum+=t[i];
     if(sum<=h){
        solved++;
        panelty+=t[i]+prefix[i-1];
     //v.push_back(make_pair(solved,panelty));
     }
    }
    v.push_back({solved,panelty});
   
 }  int key=v[0].first;int key1=v[0].second;

  sort(v.begin(),v.end(),cmp);
// for(auto x: v){
//     cout<<x.first<<" "<<x.second<<endl;
// }cout<<endl;
for(int i=0;i<m;i++) {
    if(v[i].first == key && v[i].second==key1) {
        cout<<i+1<<endl;
        break;
    }
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