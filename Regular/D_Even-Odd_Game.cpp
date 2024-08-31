#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
int n;cin>>n;
vector<int>a(n);int even=0,odd=0;
for(auto &x:a){
    cin>>x;
    if(x&1){
     odd+=x;
    }else{
        even+=x;
    }
}
if(n>1 && odd>even && odd%2!=0){
    cout<<"Bob"<<endl;
}
else if(n>1 && even>odd && even%2==0){
    cout<<"Alice"<<endl;
}
else {
cout<<"Tie"<<endl;
}


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