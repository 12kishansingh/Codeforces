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
int prev=0;int flag=1;
for(int i=0;i<n;i++){
    if(a[i]>=prev && a[i]/10>=prev&& a[i]%10>=a[i]/10){
        prev=a[i]%10;
    }
    else{
        if(a[i]>=prev){
            prev=a[i];
        }
        else{
            flag=0;break;
        }
    }
}
cout<<(flag? "YES":"NO")<<endl;
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