#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
bool check(vector<int>v,double mid,int k){
    if(mid==0)return true;
    int cnt=0;
    for(int i=0;i<v.size();i++){
        cnt+=v[i]/mid;
    }
    return cnt>=k;
}
void solve(){
int n,k;cin>>n>>k;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
cout<<fixed<<setprecision(6);
double l=0,h=1e8;
double ans=0;
for(int i=0;i<80 && l<=h;i++){
    if(l<=h){// while(h-l>0.000001)
         double mid=l+(h-l)/2.0;
        //cout<<mid<<endl;
        if(check(v,mid,k)){
            ans=mid;
            l=mid;
        }
        else{
            h=mid;
        }
    }
   // cout<<l<<" "<<h<<endl;
}
cout<<ans<<endl;

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
// wrong ans on tes 9 for below code 

/*

    while(h-l>0.000001){
         double mid=l+(h-l)/2.0;
        //cout<<mid<<endl;
        if(check(v,mid,k)){
            ans=mid;
            l=mid;
        }
        else{
            h=mid;
        }
    }
cout<<ans<<endl;

}

*/
