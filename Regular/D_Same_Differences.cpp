#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
int n;cin>>n;
int a[n];
unordered_map<int,int>mp;
for(int i=0;i<n;i++){
    cin>>a[i];
    int x=a[i]-i;
    mp[x]++;
}ll cnt=0;
for(auto x:mp){
    int c=x.second;
    cnt+=1ll*c*(c-1)/2;// if c count of similar numbers then how may no of pair can be formed
}
cout<<cnt<<endl;
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