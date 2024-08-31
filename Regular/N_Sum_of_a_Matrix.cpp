#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) begin(x), end(x)
const int M=1e9+7;


void sum(int i,int j,int n,int m,vector<vector<int>>&a,vector<vector<int>>&b,vector<vector<int>>&ans){

if(i>=n || j>=m){
    return;
}
if(ans[i][j]!=-1e5){
    return;
}
else{
    ans[i][j]=a[i][j]+b[i][j];
    sum(i,j+1,n,m,a,b,ans);
    sum(i+1,j,n,m,a,b,ans);
    sum(i+1,j+1,n,m,a,b,ans);
}
}

void solve(){
    int n,m;
cin>>n>>m;

vector<vector<int>>a(n,vector<int>(m));
vector<vector<int>>b(n,vector<int>(m));
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>a[i][j];
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>b[i][j];
    }
}
vector<vector<int>>ans(n,vector<int>(m,-1e5));

sum(0,0,n,m,a,b,ans);
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<ans[i][j]<<" ";
    }cout<<endl;
}

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