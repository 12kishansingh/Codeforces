#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
string s1="...";
while(t--){
int n;
cin>>n;
string s;
cin>>s;int cnt=0;
if(s.find(s1)!=string::npos){cout<<2<<endl;}
else {
    for(int i=0;i<n;i++){
        if(s[i]=='.')cnt++;
    }
    cout<<cnt<<endl;
}

}
return 0;
}