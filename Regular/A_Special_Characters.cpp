#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
int n;cin>>n;
if(n&1){
    cout<<"NO"<<endl;
}
else {
    char ch='A';cout<<"YES"<<endl;
    for(int i=0;i<n/2;i++){
        cout<<ch<<ch;ch++;
    }cout<<endl;
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