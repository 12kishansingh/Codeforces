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
int n;
cin>>n;
string p;
cin>>p;
string c;
cin>>c;
for(int i=0;i<n;i++){
    int cnt=0;
    while(p[i]!=c[i]){
       //'A' ==65
        p[i]=char(int(p[i]+3-65)%26+65);//ENCRYPTION
        cnt++;
    }
    cout<<cnt<<" ";
}
cout<<endl;
}
return 0;
}