#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
const int INF=1000000;
void solve(){
int n,x0,y0;
cin>>n>>x0>>y0;
int cnt=0;
unordered_set<double>s;
while(n--){
    int x,y;
    cin>>x>>y;
    if(x-x0==0){s.insert(INF);}
    else{
    double m=(y-y0)/(double)(x-x0);
    s.insert(m); 
    }
}
cout<<s.size()<<endl;
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