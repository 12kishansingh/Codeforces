#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) begin(x), end(x)
const int M=1e9+7;
void solve(){
int l=1,r=1000000;
int ans=-1;
while(l<=r){
    int mid=(l+r)/2;
    cout<<mid<<endl;
    fflush(stdout);
    string s;cin>>s;
    if(s=="<"){
        r=mid-1;
    }
    else{
        ans=mid;
        l=mid+1;
    }
}
cout<<"! "<<ans<<endl;
fflush(stdout);

}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

solve();

return 0;
}