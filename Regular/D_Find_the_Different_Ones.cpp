#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) begin(x), end(x)
const int M=1e9+7;

void solve(){
int n;cin>>n;
vector<int>a(n);
for(auto &x:a)cin>>x;
int q;cin>>q;
while(q--){
    int l,r;cin>>l>>r;
    int curr=0;
    for(int i=l;i<=r-1;i++){
        
        if(a[i]==a[i+1]){
            curr=a[i];
        }
        else if(curr!=a[i]){
            cout<<
        }    }
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