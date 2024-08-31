#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
int n,t;cin>>n>>t;
string s;cin>>s;
string s1="";
while(t--){
for(int i=0;i<n-1;i++){
    if(s[i]=='B' && s[i+1]=='G'){
        s[i]='G';
        s[i+1]='B';i++;
    }
}
}
cout<<s<<endl;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int t;
//cin>>t;
t=1;
while(t--){
solve();
}
return 0;
}