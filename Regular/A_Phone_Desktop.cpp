#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) begin(x), end(x)
const int M=1e9+7;
void solve(){
int x,y;cin>>x>>y;
int miny=ceil(y/2.0);
//cout<<miny<<" ";
int left=miny*15-y*4;
//cout<<left<<endl;
if(miny!=0 && x>left){    left=x-left;//cout<<left<<" ";
    cout<<miny+ceil(left/15.0)<<endl;
}
else if(miny==0){
    cout<<(int)ceil(x/15.0)<<endl;
}
else{
    cout<<miny<<endl;
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