#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
int a,b,c;cin>>a>>b>>c;
if(a<b && b<c){
    cout<<"STAIR"<<endl;
}
else if(a<b&& b>c){
    cout<<"PEAK"<<endl;
}else {cout<<"NONE"<<endl;}
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