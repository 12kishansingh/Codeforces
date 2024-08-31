#include <bits/stdc++.h>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
if(a==1 && b==1){
    cout<<0<<endl;
    return 0;
}
int ans=0;
while(a>0 && b>0){
    if(a<b){
        a+=1;
        b-=2;
        ans++;
        
    }
    else {
        b+=1;
        a-=2;
        ans++;
    }
    
}
cout<<ans<<endl;
return 0;
}