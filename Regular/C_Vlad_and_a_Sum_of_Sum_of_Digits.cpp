#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=2e5+7;
int ans[M];
int s(int n){
    int sum=0;
    while(n!=0){
        int rem=n%10;
        sum+=rem;
        n/=10;
    }
    return sum;
}
void solve(){
int n;cin>>n;
cout<<ans[n]<<endl;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
ans[0]=0;
for(int i=1;i<M;i++){
ans[i]=ans[i-1]+s(i);
}
int t;
cin>>t;

while(t--){
solve();
}
return 0;
}