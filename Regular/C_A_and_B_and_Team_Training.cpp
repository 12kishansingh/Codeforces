#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
int n,m;cin>>n>>m;
int lar=max(n,m);
int sm=min(n,m);
int cnt=0;
while(lar>1 && sm>=1){
    cnt++;
    lar=lar-2;
    sm--;
}
if(sm>=2){
    cnt+=(sm+lar)/3;
}
cout<<cnt<<endl;
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
