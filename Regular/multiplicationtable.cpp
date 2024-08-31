#include <bits/stdc++.h>
using namespace std;
int main(){
long long int n,x;
cin>>n>>x;
int cnt=0;
for(int i=1;i<=n;i++){
 if(x%i==0 && i*(x/i)<=n*i){cnt++;
    // cout<<i<<" ";
 }
}
cout<<cnt<<endl;

return 0;
}