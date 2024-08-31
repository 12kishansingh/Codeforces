#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
int n;cin>>n;
map<int,int>m;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
    m[a[i]]++;
}
int answ=0;
for(auto it:m){
   answ+=it.second/3; 
}cout<<answ<<endl;
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