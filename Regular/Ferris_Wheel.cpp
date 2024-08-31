#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) begin(x), end(x)
const int M=1e9+7;
void solve(){
int n;cin>>n;
int x;cin>>x;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
sort(a,a+n);
int j=n-1,i=0;
int ans=0;
while(i<j){
    if(a[i]+a[j]<=x){
        i++;j--;
        ans++;
    }
    else{
        j--;
    }
}
cout<<n-ans<<endl;
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