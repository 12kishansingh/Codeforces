#include <bits/stdc++.h>
#include<set>

using namespace std;
int main(){
int t;
cin>>t;
int X[4]={1,-1,-1,1},Y[4]={1,1,-1,-1};

while(t--){
int a,b,xk,yk,xq,yq;
cin>>a>>b;
cin>>xk>>yk;
cin>>xq>>yq;
set<pair<int,int>> s1,s2;
for(int j=0;j<4;j++){
    s1.insert(xk+a*X[j],yk+b*Y[j]);
    s2.insert(xk+a*X[j],yk+b*Y[j]);
    s1.insert(xk+b*X[j],yk+a*Y[j]);
    s1.insert(xk+b*X[j],yk+a*Y[j]);

}
int ans=0;
for(auto x:s1){
    if(s2.find(x)!=s2.end())
    ans++;

}
cout<<ans<<endl;

}
return 0;
}