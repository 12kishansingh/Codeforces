#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
int n,k;cin>>n>>k;
int a[2*n];
set<int>s;
for(int i=0;i<2*n;i++){
    cin>>a[i];
    s.insert(a[i]);
}
vector<int>v;
for(auto it=s.begin();it!=s.end();it++){
    v.push_back(*it);
}
for(int i=0;i<2*k;i++){
cout<<v[i]<<" ";
}cout<<endl;
for(int i=0;i<2*k;i++){
cout<<v[i]<<" ";
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