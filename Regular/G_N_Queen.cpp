#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
int x1,y1,x2,y2;
cin >> x1 >> y1 >> x2 >> y2;
if(x1==x2 || y1==y2 || abs(x1-x2)==abs(y1-y2)){
    cout<<"Yes"<<endl;
}
else {
    cout<<"No"<<endl;
}


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