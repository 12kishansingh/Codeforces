#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
string s;cin>>s;
int i=0,j=s.length()-1;
int f=0;
while(i<=j){
if(s[i]==s[j]){
    i++;j--;
}
else{
    f=1;
    break;
}
}
if(!f){
    cout<<"First"<<endl;
}
else{
    map<char,int>mp;
for(int i=0;i<s.length();i++){
    mp[s[i]]++;
}
int cnt=0;
for(auto x:mp){
    if(x.second%2==1)cnt++;
   // if(x.second%2==0)cnt1++;
}
if(cnt==0){cout<<"First"<<endl;return;}
if( cnt>0 && cnt%2==0){
    cout<<"Second"<<endl;
}
else{
    cout<<"First"<<endl;
}

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