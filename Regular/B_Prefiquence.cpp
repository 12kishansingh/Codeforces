#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
int n;cin>>n;
int m;cin>>m;
string a;cin>>a;
string b;cin>>b;
int idx=0,res=0;
for(int i=0;i<m && idx<n;i++){
    if(b[i]==a[idx]){
        idx++;res++;
    }
}
cout<<res<<endl;
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