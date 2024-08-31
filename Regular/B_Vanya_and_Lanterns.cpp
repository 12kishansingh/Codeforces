#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
// bool check(double mid,int a[],int n,int L){

// }
void solve(){
int n,L;
cin>>n>>L;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}sort(a,a+n);
cout<<fixed<<setprecision(10);
int ans=max(a[0],L-a[n-1]);ans*=2;
for(int i=0;i<n-1;i++){
    int diff=a[i+1]-a[i];
    ans=max(ans,a[i+1]-a[i]);
}
double d=ans/2.0;
cout<<d<<endl;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int t;
//cin>>t;
t=1;
while(t--){
solve();
}
return 0;
}
