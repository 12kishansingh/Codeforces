#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) begin(x), end(x)
const int M=1e9+7;
void solve(){
int n;cin>>n;
vector<int>a(n),b;
for(int &i:a)cin>>i;
int x=*min_element(all(a));
int cnt=0;
for(int i=0;i<n;i++){
    if(a[i]%x==0){
        cnt++;
    }
    else{
        b.push_back(a[i]);
    }
}
if(cnt==n){
    cout<<"Yes"<<endl;return;
}
int y=*min_element(all(b));
for(int i=0;i<b.size();i++){
    if(b[i]%y==0){
        cnt++;
    }
    else{
        cout<<"No"<<endl;return;
    }
}
cout<<"Yes"<<endl;

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