#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
string x,y;cin>>x>>y;
bool f=0;
string s1,s2;
for(int i=0;i<x.size();i++){
if(f==0){
    if(x[i]==y[i]){
        s1+=x[i];
        s2+=y[i];
    }
    else if(x[i]>y[i]){
        f=1;
        s1+=x[i];
        s2+=y[i];
    }
    else{
        f=1;
        s1+=y[i];
        s2+=x[i];
    }
}
else{
    if(x[i]>y[i]){
        s1+=y[i];
        s2+=x[i];
    }
    else{
        s1+=x[i];
        s2+=y[i];
    }
}
}
cout<<s1<<endl<<s2<<endl;
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