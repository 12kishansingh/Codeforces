#include <bits/stdc++.h>
using namespace std;

void binary(long long a[],long long n,long long c){
   

    long long int l=1,r=1e9;
    while(l<=r){
        long long int mid=l+(r-l)/2;
        long long int sum=0;
        for(int i=0;i<n;i++){
            sum+=(a[i]+2*mid)*(a[i]+2*mid);
            if(sum>c)break;
        }
        if(sum==c){
            cout<<mid<<endl;
            return;
        }
        if(sum>c){
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
}
int main(){
int t;
cin>>t;

while(t--){
 long long int n,c;
cin>>n>>c;
long long int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
binary(a,n,c);

}
return 0;
}