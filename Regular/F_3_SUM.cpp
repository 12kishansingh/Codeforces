#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
int n;cin>>n;
int b[n]={};
for(int i=0;i<n;i++){
    int x;cin>>x;
    b[x%10]++;
}
vector<int>v;
for(int i=0;i<10;i++){
    for(int j=0;j<min(b[i],3);j++){
        v.push_back(i);
    }
}
for(int i=0;i<v.size();i++){
    for(int j=i+1;j<v.size();j++){
        for(int z=j+1;z<v.size();z++){
            if((v[i]+v[j]+v[z])%10==3){
                cout<<"YES"<<endl;return;
            }
        }
    }
}
cout<<"NO"<<endl;
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