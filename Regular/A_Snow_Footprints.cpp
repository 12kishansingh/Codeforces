#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
int n;cin>>n;
string s;cin>>s;
int R=0,R1=0;
for(int i=0;i<n;i++){
    if(s[i]=='R'){R=i+1;break;}
}int L1=0;
for(int i=0;i<n;i++){
    if(s[i]=='L'){L1=i;break;}
}
for(int i=0;i<n;i++){
    if(s[i]=='R'){R1=i+1;}
}
int L=0;
for(int i=0;i<n-1;i++){
    if(s[i]=='R'&& s[i+1]=='L'){
        L=i+1;break;
    }
}if(L==0&& R!=0)cout<<R<<" "<<R1+1<<endl;
else if(R==0 && L==0)cout<<L1+1<<" "<<L1<<endl;
else cout<<R<<" "<<L<<endl;
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