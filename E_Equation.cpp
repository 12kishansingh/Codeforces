#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
bool check(long double mid,long double c){
  return mid*mid+double(sqrt(mid))>=c;
}
void solve(){
long double c;
cin>>c;
long double l=1.0,r=1;
while(check(r,c)==false){
    r*=2;
}
cout<<fixed<<setprecision(15);
for(int i=0;i<80 && l<=r;i++){
    if(l<=r){
        long double mid=l+(r-l)/2.0;
        if(check(mid,c)){
            r=mid;
        }
        else{
            l=mid;
        }
    }
}
cout<<r<<endl;

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