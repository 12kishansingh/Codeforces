#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
int n;cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int j=n-1,i=0;int A=0,B=0;
while(i<=j){
    if(a[i]<a[j]){
        j--;
    }
    else {A=i+1,B=j+1;
        swap(a[i],a[j]);i++;
        break;
    }
}int ans=1;
for(int i=0;i<n-1;i++){
    if(a[i]>a[i+1]){
        ans=0;break;
    }
}if(ans)cout<<"yes"<<endl<<A<<" "<<B<<endl;
else cout<<"no"<<endl;
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