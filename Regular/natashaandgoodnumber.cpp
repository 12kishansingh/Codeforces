#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;

while(t--){
long long int a,b;
cin>>a>>b;
if(b==1){
cout<<"No"<<endl;
}
    

else{
    cout<<"Yes"<<endl;
    cout<<a<<" "<<a*b<<" "<<a*(b+1)<<endl;
}
}
return 0;
}