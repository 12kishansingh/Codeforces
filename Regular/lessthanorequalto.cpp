#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void search(int a[],int n,int val){
    int l=0,r=n-1;
    int ans=-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(val>=a[mid]){
            ans=mid;
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    cout<<ans+1<<endl;
}
void solve(){
int n;cin>>n;
int m;cin>>m;
int a[n];
int b[m];
for(int i=0;i<n;i++){
    cin>>a[i];
}sort(a,a+n);
for(int i=0;i<m;i++){
    cin>>b[i];
    search(a,n,b[i]);
}

}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

solve();

return 0;
}