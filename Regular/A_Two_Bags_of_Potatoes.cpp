#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
int y,k,n;cin>>y>>k>>n;int ans=0;
vector<int>v;
for(int i=1;i*k<=n;i++){
    int x=i*k-y;
    if(x>=1&& x+y<=n){
        v.push_back(x);
    }
}
    if(v.empty()){
        cout<<-1<<endl;
    }
    else{
        for(auto x:v){
            cout<<x<<" ";
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