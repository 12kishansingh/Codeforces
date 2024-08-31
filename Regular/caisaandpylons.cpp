#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int h[n];
int ans=0,energy=0,prev=0;
for(int i=1;i<=n;++i){
    cin>>h[i];
     energy+=prev-h[i];
    if(energy<0){
        ans+=-energy;
        energy=0;
    }
    prev=h[i];

}

cout<<ans<<endl;
return 0;
}