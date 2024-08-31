#include <bits/stdc++.h>
using namespace std;
long long int d(long long int a,long long int b){
    return (a+b-1)/b;
}
void solve(){
    long long int x,y,k;
cin>>x>>y>>k;
long long int X=d((k*y+k-1),(x-1));
X=X+k;
cout<<X<<endl;

}
int main(){
int t;
cin>>t;

while(t--){
solve();

}
return 0;
}