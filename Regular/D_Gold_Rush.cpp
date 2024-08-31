#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
int ans(int n,int m){
if(n==m){
    return 1;
}
else if(n%3!=0){
    return 0;
}
else{
    return (ans(n/3,m)|| ans(2*n/3,m));
}

}
void solve(){
int n,m;cin>>n>>m;
cout<<(ans(n,m)? "YES": "NO")<<endl;

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