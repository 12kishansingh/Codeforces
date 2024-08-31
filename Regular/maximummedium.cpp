#include <bits/stdc++.h>
using namespace std;
int n;
long long k;
vector<long long>v;
bool check(long long x){
    long long operation=0;
    for(int i=(n-1)/2;i<n;i++){
        operation+= max((long long )0, x-v[i]);
    }
    if(operation<=k)return true;
    else return false;
}
long long search(){
    long long pos=0,m=2E9;
    for(long long i=m;i>=1;i/=2){
        while(check(pos+i))pos+=i;
    }
    return pos;
}
int main(){
    
    cin>>n>>k;
    //long long int a[n];
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        v.push_back(t);
    }
    sort(v.begin(),v.end());

    long long ans=search();
    cout<<ans<<endl;
    
 

return 0;
}