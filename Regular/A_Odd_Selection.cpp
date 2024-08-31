#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
int n;cin>>n;
int x;cin>>x;
int a[n];
int even=0,odd=0;
vector<int>Odd,Even;
for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]%2){odd++;Odd.push_back(a[i]);}
    else {even++;Even.push_back(a[i]);}
}int sum=0;
for(int i=0;i<min(odd,x);i++){
sum+=Odd[i];
}
if(odd<x){
    for(int i=0;i<x-odd;i++){
    sum+=Even[i];
    }
}
if(sum%2){
    cout<<"Yes"<<endl;
}
else{
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