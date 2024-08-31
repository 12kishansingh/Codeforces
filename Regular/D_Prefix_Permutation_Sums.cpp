#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) begin(x), end(x)
const int M=1e9+7;
ll a[200005];   
void solve(){
int n;cin>>n;
set<int>s;

for(int i=1;i<=n;i++)s.insert(i);
ll extra=0;
for(int i=1;i<n;i++){
    cin>>a[i];
    if(s.count(a[i]-a[i-1]))s.erase(a[i]-a[i-1]);
    else extra=a[i]-a[i-1];
}
if(s.size()==1){
    cout<<"YES"<<endl;
}
else if(s.size()==2){
    cout<<(*s.begin()+*s.rbegin()==extra?"YES":"NO")<<endl;;
}
else{
    cout<<"NO"<<endl;
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
