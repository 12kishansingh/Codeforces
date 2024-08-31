#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
int n;cin>>n;
int f=0;
for(int i=2;i*i<=n;i++){
if(n%i==0){
    f=1;break;
}
}
if(!f){  // n is prime 
    cout<<n-1<<" "<<1<<endl;
    return;
}
if(n%2==0){
    cout<<n/2<<" "<<n/2<<endl;
}
else{int lar=0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            lar=i;break;
        }
    }
    cout<<n/lar<<" "<<n-n/lar<<endl;
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