#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
int n;cin>>n;
string s;cin>>s;
int cnt=0;
if(s.length()==1){
    cout<<0<<endl;return;
}
for(int i=0;i<s.length()-2;i++){
    if(s[i]=='p' && s[i+1]=='i'&& s[i+2]=='e' ||s[i]=='m' && s[i+1]=='a'&& s[i+2]=='p'){
        cnt++;i=i+2;
    }
}cout<<cnt<<endl;
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