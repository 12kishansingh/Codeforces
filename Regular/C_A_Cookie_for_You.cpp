#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int n;cin>>n;
ll a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int cnt=0;
for(int i=0;i<n-1;i++){
    if(a[i]>a[i+1]){
        cnt+=a[i]-a[i+1];
        a[i+1]=a[i];
    }
}cout<<cnt<<endl;
return 0;
}