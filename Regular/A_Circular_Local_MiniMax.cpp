#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
int n;cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}sort(a,a+n);
if(n&1){
    cout<<"NO"<<endl;return;
}int j=n/2;
vector<int>v;
for(int i=0;i<n/2;i++){ 
v.push_back(a[i]);v.push_back(a[j]);j++;
}
for(int i=1;i<n-1;i++){
    if(v[i]>v[i-1] && v[i]>v[i+1]){
        continue;;
    }
    else if(v[i]<v[i-1]&& v[i]<v[i+1]){
        continue;
    }
    else{
        cout<<"NO"<<endl;return;
    }
}cout<<"YES"<<endl;
for(int i=0;i<n;i++){
    if(i!=n-1)cout<<v[i]<<" ";
    else cout<<v[i];
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