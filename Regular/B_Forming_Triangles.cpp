#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
int n;cin>>n;

vector<int>a(n),cnt(n+1);
for(int i=0;i<n;i++){
    cin>>a[i];
    cnt[a[i]]++;
}
ll ans=0;
int small=0;
for(int i=0;i<=n;i++){
    ans+=1LL*cnt[i]*(cnt[i]-1)*(cnt[i]-2)/6;// when a,b,c=l then nc3
    ans+=1LL*cnt[i]*(cnt[i]-1)/2 * small;//a=b=l>=c  then nc2 into  no of sides with lengths less than l 
    small+=cnt[i];
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