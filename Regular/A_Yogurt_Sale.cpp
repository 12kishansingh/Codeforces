#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
int n;
int a,b;cin>>n>>a>>b;
int two=a*2;
if(two>b && b/2<a){
    cout<<b*(n/2)+a*(n%2)<<endl;
}
else{
    cout<<a*n<<endl;
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