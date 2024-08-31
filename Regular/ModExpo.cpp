#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
int modpow(int x,int n){
    if(n==0)return 1%M;
    ll u=modpow(x,n/2);
    u=(u*u)%M;
    if(n%2==1)u=(u*x)%M;
    return u;
}
int main(){
int x,n;
cin>>x>>n;
cout<<modpow(x,n)<<endl;
return 0;

}