#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
int n;cin>>n;
if(n<=9){// if n is less than 10 -> no
    cout<<"NO"<<endl;return;
}int f=0;
for(int i=2;i*i<=n;i++){// if n is prime ->no
    if(n%i==0)f=1;
}
if(!f){cout<<"NO"<<endl;return;}
int cnt=0;
vector<int>v;
for(int i=2;i*i<=n;i++){
    if(n%i==0){
        cnt++;
        n=n/i;
        v.push_back(i);
    }
    if(cnt==2){
        v.push_back(n);break;
    }
}
if(cnt<2){
    cout<<"NO"<<endl;
}
else if(v[0]==v[2] || v[1]==v[2]){
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
    cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<endl;
}

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