#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
string s;cin>>s;
int Min=INT_MAX;char ch;
for(int i=0;i<s.length();i++){
    if((s[i]-'0')%2==0){
        Min=min(Min,s[i]-'0');ch=s[i];
        }
}
if(Min==INT_MAX){cout<<-1<<endl;return;}
int idx=-1;
for(int i=0;i<s.length()-1;i++){
    if((s[i]-'0')%2==0 && s[i]<s[s.length()-1]){
idx=i;break;
    }
}
if(idx==-1){
    for(int i=s.length()-2;i>=0;i--){
if((s[i]-'0')%2==0 && s[i]>s[s.length()-1]){
    idx=i;break;
}
    }
}
swap(s[idx],s[s.length()-1]);
cout<<s<<endl;

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
