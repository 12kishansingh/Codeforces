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
ll i,j;cin>>i>>j;

if(i>j){
  ll val=i*i-(i-1); // diagonal element
  if(i%2==0){
    cout<<val+(i-j)<<endl;
  }  
  else{
    cout<<val-(i-j)<<endl;
  }
}
else if(i<j){
    ll val=j*j-(j-1);
    if(j%2==1){
        cout<<val+(j-i)<<endl;
    }
    else{
        cout<<val-(j-i)<<endl;
    }
}
else{
    cout<<i*i-(i-1)<<endl;
}
}
return 0;
}