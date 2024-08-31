#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
int n;cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
sort(a,a+n);
if(a[0]!=a[1]){
    cout<<"YES"<<endl;
}
int ans=0;
if(a[0]==a[1]){
    for(int i=1;i<n;i++){
        if(a[i]%a[0]!=0){
            ans=a[i];
            cout<<"YES"<<endl;return;
            //break;
        }
       
    } cout<<"NO"<<endl;   
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