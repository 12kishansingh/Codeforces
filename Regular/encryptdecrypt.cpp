#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int t;
cin>>t;

while(t--){
string s;
cin>>s;
string ans="";
int shift=2;
for(int i=0;i<s.length();i++){
ans+=char(int(s[i]+3*shift-65)%26+65);//encrypt

//ans+=char(int(s[i]+(26-shift)-65)%26+65);//decrypt

//small lettter
// ans+=char(int(s[i]-97+shift)%26+97);encrypt
}
cout<<ans<<endl;
}
return 0;
}