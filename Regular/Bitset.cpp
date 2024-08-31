#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) begin(x), end(x)
const int M=1e9+7;
void solve(){
int n;cin>>n;

bitset<8>b(n);
cout<<b<<endl;// 00101010
cout<<b[3]<<" "<<b[0]<<endl;
b.set(1);
cout<<b<<endl;
b.reset(3);
cout<<b<<endl;
b.flip(2);
cout<<b<<endl;
cout<<b.count()<<endl<<endl;
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