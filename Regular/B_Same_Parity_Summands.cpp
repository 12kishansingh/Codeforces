#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
int n;cin>>n;
int k;cin>>k;
int x=n-k+1;
if(x>0 && x%2==1){
    cout<<"YES"<<endl;
    for(int i=0;i<k-1;i++){
        cout<<1<<" ";
    }cout<<x<<endl;
    return;
}
int y=n-2*(k-1);
if(y>0 && y%2==0){
    cout<<"YES"<<endl;
    for(int i=0;i<k-1;i++)cout<<2<<" ";
    cout<<y<<endl;
    return;
}
cout<<"NO"<<endl;
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