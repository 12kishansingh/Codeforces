#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
int main(){
int t;
cin>>t;

while(t--){
int n;
cin>>n;
int a[n];
int sum=0;
for(int i=0;i<n;i++){
    cin>>a[i];
    sum+=a[i];
}

int avg=sum/n;
int extra=0;
int ans=1;
if(n==1){
    cout<<"Yes"<<endl;
    continue;
}
for(int i=0;i<n;i++){
    if(a[i]>avg){
        extra+=a[i]-avg;
    }
    else{
        int need=avg-a[i];
        if(extra>=need){
            extra-=need;
        }
        else{
            ans=0;
            break;
        }
    }

}
if(ans){
    cout<<"Yes"<<endl;
}
else{
    cout<<"No"<<endl;
}


}
return 0;
}