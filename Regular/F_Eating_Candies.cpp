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
// int pref[n+1],suf[n+1];
// pref[0]=a[0];suf[n-1]=a[n-1];
// for(int i=1;i<n;i++){
//     pref[i]=pref[i-1]+a[i];
// }
// for(int i=n-2;i>=0;i--){
//     suf[i]=suf[i+1]+a[i];
//}
int ans=0,i=0,j=n-1,left=0,right=0;
while(i<=j){
    if(left==right&& left>0){
        ans=n-j+i-1;
    }
    if(left==right){
        left+=a[i];
        i++;
    }
    else if(left>right){
        right+=a[j];
        j--;
    }
    else{
        left+=a[i];
        i++;
    }
}
if(left==right){
    cout<<n<<endl;
}
else {
    cout<<ans<<endl;
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