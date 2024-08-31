#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) begin(x), end(x)
const int M=1e9+7;

void solve(){
int a,b,c;cin>>a>>b>>c;
ll ans=a+b+c;
if(ans%2==1){
    cout<<-1<<endl;return;
}
 ans=a;
    while(a--){
        if (b>c){
            swap(b,c);
        }
        c--;
    }
    ans+=min(b,c);
    cout << ans << endl;
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