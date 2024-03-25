#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
int c,m,x;
cin>>c>>m>>x;
int l=0,r=min(c,m);
int ans=0;
while(l<=r){
    int mid=l+(r-l)/2;
    if(c+m+x>=3*mid){
        ans=mid;
        l=mid+1;
    }
    else {
        r=mid-1;
    }
}
cout<<ans<<endl;
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