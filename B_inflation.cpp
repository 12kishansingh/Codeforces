#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
bool check(vector<ll>a,ll k,ll mid){
    int l=a.size();
    ll sum=mid;
    // p=a[0]+mid; 

    for(int i=1;i<a.size();i++){
        sum+=a[i-1];
        //cout<<i<<" "<<100*a[i]<<" "<<sum*k<<endl;
        if((ll)100*a[i]>sum*k)return 0;
        
    }
   
    return 1;

}
void search(vector<ll>a,ll k){
    ll l=0,r=1e12;
    ll ans=0;
    // while(l<r){
    //     ll mid=l+(r-l)/2;
    //     //cout<<mid<<endl;
    //     if(check(a,k,mid)){
    //         ans=mid;//cout<<mid<<endl;
    //         r=mid-1;
    //     }
    //     else {
    //         l=mid+1;
    //     }
    // }
    for(int i=0;i<80&&r>=l;i++)
    { 
        if(l<=r)
        {
          ll mid=l+(r-l)/2;
        //cout<<mid<<endl;
        if(check(a,k,mid)){
            ans=mid;//cout<<mid<<endl;
            r=mid;
        }
        else {
            l=mid;
        }
        }

    }


    cout<<ans<<endl;
}
void solve(){
int n;cin>>n;
ll k;cin>>k;
vector<ll>a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}
//for(auto &x:a)cout<<x<<" ";cout<<endl;
//sort(a.begin(),a.end());
search(a,k);
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
