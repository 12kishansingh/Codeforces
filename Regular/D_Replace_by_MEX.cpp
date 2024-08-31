#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
int n;cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
set<int>s;
for(int i=0;i<=n;i++){
    s.insert(i);
}
if(is_sorted(a,a+n)){
    cout<<0<<endl;
    cout<<endl;
    return;
}
int prefix[n];int cnt=0;
vector<int>v;
for(int i=0;i<n-1;i++){
    auto it=s.find(a[i]);
    if(it!=s.end()){
        s.erase(a[i]);
    }
    prefix[i]=*s.begin();
    if(prefix[i]<a[i]){
        cnt++;
        v.push_back(i);
    }
}cout<<cnt<<endl;
for(auto x:v){
    cout<<x<<" ";
}cout<<endl;
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