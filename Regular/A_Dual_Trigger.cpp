#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
int n;cin>>n;
string s;
cin>>s;
int cnt1=0;
for(int i=0;i<n;i++){
if(s[i]=='1')cnt1++;
}

if(cnt1==2){
    for(int i=0;i<n-1;i++){
        if(s[i]=='1'&& s[i+1]=='1'){cout<<"NO"<<endl;return;}
    }
}
if(cnt1%2==1){
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
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