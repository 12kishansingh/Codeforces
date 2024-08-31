#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
int n;cin>>n;
int s;cin>>s;
int a[n];int sum=0;
deque<int>d;
for(int i=0;i<n;i++){
    cin>>a[i];
    sum+=a[i];
    d.push_back(a[i]);
}
if(sum<s){
    cout<<-1<<endl;return;
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