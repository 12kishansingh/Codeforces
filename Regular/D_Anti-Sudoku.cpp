#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
    for(int i=0;i<9;i++){
        string s;cin>>s;
        for(auto &c:s){
            if(c=='3'){
                c='2';
            }
        }cout<<s<<endl;
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