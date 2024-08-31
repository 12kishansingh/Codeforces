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
}
for(int i=1;i<=4000;i++){
    s.insert(i);
}
for(int i=0;i<n;i++){
    auto it=s.find(a[i]);
    if(it!=s.end()){
        s.erase(it);
    }
}cout<<*s.begin()<<endl;
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