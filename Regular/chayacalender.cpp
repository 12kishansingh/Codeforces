#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int t;
cin>>t;

while(t--){
int n;
cin>>n;
int a[n];
for(int i=1;i<=n;i++){
    cin>>a[i];
}
int ans=a[1];
for(int i=2;i<=n;i++){
    if(a[i]>ans){
        ans=a[i];
    }
    else{
        ans=((ans /a[i])+1)*a[i];
    }
}
cout<<ans<<endl;
}
return 0;
}