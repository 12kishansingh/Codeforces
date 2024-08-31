#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) begin(x), end(x)
const int M=1e9+7;
bool check(vector<int>&a){
for(int i=1;i<a.size()-1;i++){
    if(__gcd(a[i],a[i-1])>__gcd(a[i],a[i+1])){
        return false;
    }
}
return true;
}
void solve(){
int n;cin>>n;
vector<int>a(n);
for(auto &x:a){
    cin>>x;
}
vector<int>c,d,e;

int idx=-1;
for(int i=1;i<n-1;i++){
    if(__gcd(a[i],a[i-1])>__gcd(a[i],a[i+1])){
        idx=i;break;
    }
}
if(idx==-1){
cout<<"YES"<<endl;return;
}

if(idx>0){
    c=a;d=a;
    c.erase(c.begin()+idx-1);
    d.erase(d.begin()+idx);
}
if(idx<n-1){
    e=a;
    e.erase(e.begin()+idx+1);
}
if(check(c)|| check(d)|| check(e)){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
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

