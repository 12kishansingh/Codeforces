#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) begin(x), end(x)
const int M=1e9+7;
void solve(){
int n;cin>>n;
int m;cin>>m;
string s1="ABCDEFG";
string s;
cin>>s;
map<char,int>mp;
set<char>st;
for(int i=0;i<s.length();i++){
    mp[s[i]]++;
    st.insert(s[i]);
}
int ans=0;
for(auto &x:mp){
    if(x.second<m){
        ans+=(m-x.second);
    }
}
for(int i=0;i<7;i++){
    if(st.find(s1[i])!=st.end()){

    }
    else{
        ans+=m;
    }
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