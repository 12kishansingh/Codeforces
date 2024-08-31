#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
int a,b,x;cin>>a>>b>>x;
    string s="";
if(!(x&1) && a>b){
    for(int i=0;i<x/2;i++){s+="01";}
    s+=string(b-x/2,'1');
    s+=string(a-x/2,'0');
}
if(!(x&1) && a<=b){ 
    for(int i=0;i<x/2;i++){s+="10";}
    s+=string(a-x/2,'0');
    s+=string(b-x/2,'1');
}
if(x&1 && a>b){
    for(int i=0;i<x/2;i++){s+="01";}
    s+=string(a-x/2,'0');
    s+=string(b-x/2,'1');
}
if(x&1 && a<=b){
    for(int i=0;i<x/2;i++){s+="10";}
    s+=string(b-x/2,'1');
    s+=string(a-x/2,'0');
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