#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
int n;cin>>n;
vector<int>v;
int cnt=0;
while(n){
int rem=n%10;
rem=rem*(pow(10,cnt));
//cout<<rem<<endl;
if(rem>0){
    v.push_back(rem);
}
cnt++;
n/=10;
}
cout<<v.size()<<endl;
for(auto x: v){
    cout<<x<<" ";
}
cout<<endl;
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