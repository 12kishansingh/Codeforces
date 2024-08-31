#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
int n;cin>>n;
int b[n-1];
for(int i=0;i<n-1;i++){
    cin>>b[i];
}
vector<int>a;
a.push_back(b[0]);
for(int i=1;i<n-1;i++){
    int x=min(b[i],b[i-1]);
    a.push_back(x);
}a.push_back(b[n-2]);
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
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