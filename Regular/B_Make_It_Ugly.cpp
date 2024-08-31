#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
int n;cin>>n;
int a[n];
set<int>s;
for(int i=0;i<n;i++){
    cin>>a[i];
    s.insert(a[i]);
}
if(s.size()==1){
    cout<<-1<<endl;return;
}
int key=a[0];int cnt=0;
vector<int>v;
for(int i=0;i<n;i++){
if(a[i]==key){
cnt++;
}else{
    v.push_back(cnt);cnt=0;
}
}
v.push_back(cnt);
int ans=*min_element(v.begin(),v.end());
cout<<ans<<endl;
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