#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
int n;cin>>n;
int k;cin>>k;
set<int>s={1,7,17,119,289,2023};
int b[n];
int p=1;
for(int i=0;i<n;i++){
    cin>>b[i];
    p*=b[i];
}
if(s.find(p)!=s.end()){
    int x=2023/p;
    cout<<"YES"<<endl;
    if(k==1){
        cout<<x;
    }else{
    cout<<x<<" ";
    }
    while(k--){
        cout<<1<<" ";
    }cout<<endl;
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