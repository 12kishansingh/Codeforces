#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
int n,m,d;cin>>n>>m>>d;int sum=0;
int a[n][m];
for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        cin>>a[i][j];
        sum+=a[i][j];
    }
}
if(sum%2==1 && (n*m)%2==0 ||sum%2==0 && (n*m)%2==1 ){
    cout<<-1<<endl;return;
}


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