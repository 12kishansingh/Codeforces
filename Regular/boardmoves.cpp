#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;

while(t--){
long long int n;
cin>>n;
// sum of sq =n(n+1)(2n+1)/6
cout<<(((n-1)/2)*((n+1)/2)*(n)*8)/6<<endl;
}
return 0;
}