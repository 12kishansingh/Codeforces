#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
int n;cin>>n;
string s;
cin>>s;
string s1=s;
reverse(s1.begin(),s1.end());
//cout<<s+s1<<endl;
if(s1<s)cout<<s1+s<<endl;
else cout<<s<<endl;
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