#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
int recur(int a[],int i,int n,int M){

    if(i>=n){
        return 0;
    }
    M=max(a[i],M);
    recur(a,i+1,n,M);
    return M;
}

void solve(){
    int n;cin>>n;
int a[n];for(int i=0;i<n;i++){
    cin>>a[i];
}
int curr=0;int m=0;
    cout<<recur(a,curr,n,m);

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