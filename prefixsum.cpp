#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int a[n+1];
for(int i=1;i<=n;i++){
    cin>>a[i];
}
int prefix[n+1];
prefix[0]=0;
for(int i=1;i<=n;i++){
    
prefix[i]=prefix[i-1]+a[i];
cout<<prefix[i]<<" ";
}
cout<<endl;
int l,r;// if we want sum array of element between index 2 and 5 
cin>>l>>r;
cout<<prefix[r]-prefix[l-1];
return 0;
}
