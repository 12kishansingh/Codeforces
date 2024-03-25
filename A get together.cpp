#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
bool check(long double mid,vector<pair<ll,ll>>&v){
    long double l=v[0].first-v[0].second*mid;
    long double h=v[0].first+v[0].second*mid;
    for(int i=1;i<v.size();i++){
        long double low=v[i].first-v[i].second*mid;
        long double high=v[i].first+v[i].second*mid;
        l=max(l,low);
        h=min(high,h);
    }
    return l<=h;

}
void solve(){
    int n;cin>>n;
vector<pair<ll,ll>>v(n);
for(int i=0;i<n;i++){
    cin>>v[i].first>>v[i].second;
}
cout<<fixed<<setprecision(6);//6 decimal place 
long double ans=0;
long double l=0, h=1e12;
for(ll i=0;i<80 && l<=h;i++){
    if(l<=h){
     long double mid=(l+(h-l)/2.0);
        if(check(mid,v)){
            ans=mid;
            h=mid;
        }
        else {
            l=mid;
        }   
    }  
}
cout<<ans<<endl;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

solve();

return 0;
}
