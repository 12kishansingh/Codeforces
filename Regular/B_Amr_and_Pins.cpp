#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
ll r,x,y,x2,y2;
cin>>r>>x>>y>>x2>>y2;
double d=(y2-y)*(y2-y)+(x2-x)*(x2-x);
d=sqrt(d);
cout<<ceil(d/(2*r));

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