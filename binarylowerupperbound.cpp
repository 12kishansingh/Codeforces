#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void upperbound(vector<int>a,int n,int x){//closest to right ,if x is present,then also it return next index
    auto it=upper_bound(a.begin(),a.end(),x);
  
    cout<<(it-a.begin())+1<<endl;
}
void upperbound1(vector<int>a,int n,int key){
    int s,e,mid;
    s=0;e=n-1;
    while(e-s>1){
        mid=(e+s)/2; 
        if(a[mid]>key){
            e=mid-1;
        }
        else{
            s=mid;
        }
    } 
   if(a[e]<=key)cout<<e+1<<endl;
   else if(a[s]<=key)cout<<s+1<<endl;
   else cout<<0<<endl;
   
}
void lowerbound(int a[],int n,int x){// closest to left, if x is present,then it return index of x , if not then it return next index
  int l=0,r=n-1;
  int ans=-1;
  while(l<=r){
    int mid=l+(r-l)/2;
    if(a[mid]>=x){
      ans=mid;
      r=mid-1;
    }
    else{
      l=mid+1;
    }
  }
  cout<<a[ans]<<endl;

}// 2 3 5 6 8 10 12
// if x=4 lower bound,value>=x will be 5
void solve(){
int n;cin>>n;
vector<int>a(n);
for(int i=0;i<n;i++){
cin>>a[i];
}
//sort(a,a+n);
int x;cin>>x;
//lowerbound(a,n,x);
upperbound(a,n,x);
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int t;
cin>>t;

while(t--){
solve();
}
return 0;
}