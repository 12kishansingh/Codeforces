#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
 
// bool prime(int n){
//     for(int i=2;i*i<=n;i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }
void solve(){
int n;cin>>n;int a[n],b[n];
for(int i=0;i<n;i++){
    cin>>a[i];
    b[i]=a[i];
}
sort(b,b+n);
int x=*min_element(a,a+n);
for(int i=0;i<n;i++){
    if(a[i]!=b[i] && a[i]%x>0){
        cout<<"NO"<<endl;return;
    }
}cout<<"YES"<<endl;
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