#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) begin(x), end(x)
const int M=1e9+7;
void solve(){
string s;
cin>>s;
int ans=0,x=0;
int n=s.length();
for(int i=1;i<n;i++){
if(s[i]==s[i-1]){
    continue;
}
else{
    ans++;
}
if(s[i-1]=='0'&& s[i]=='1'){
    x=1;
}
}

cout<<ans+1-x<<endl;
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

