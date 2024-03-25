#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
bool check(int mid,int n,int x,int y){
    int t=min(x,y);int t1=max(x,y);
    return mid/t+(mid-t)/t1>=n;
}
void solve(){
int n,x,y;cin>>n>>x>>y;
int l=0,r=1e12;
int ans=0;
for(int i=0;i<50;i++){
    if(l<=r){
        int mid=l+(r-l)/2;
        if(check(mid,n,x,y)){
            ans=mid;
            r=mid;
        }
        else{
            l=mid;
        }
    }
}
cout<<ans<<endl;
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