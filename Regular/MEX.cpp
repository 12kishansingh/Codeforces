#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
int n;cin>>n;
int a[n];
set<int>s,s1;
for(int i=0;i<n;i++){
    cin>>a[i];
}

for(int i=0;i<=n;i++){
    s.insert(i);
    s1.insert(i);
}
// for(int i=0;i<=n;i++){
//     auto it=s.find(a[i]);
//     if(it!=s.end()){
//         s.erase(it);
//     }
// }
// cout<<*s.begin()<<endl;
int prefix[n];
for(int i=0;i<n;i++){
    auto it=s.find(a[i]);
    if(it!=s.end()){
        s.erase(it);
    }
    prefix[i]=*s.begin();
    cout<<prefix[i]<<" ";
}cout<<endl;
int post[n];
for(int i=n-1;i>=0;i--){
    auto it=s1.find(a[i]);
    if(it!=s1.end()){
        s1.erase(it);
    }
    post[i]=*s1.begin();
    cout<<post[i]<<" ";
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