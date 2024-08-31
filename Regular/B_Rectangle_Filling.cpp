#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
void solve(){
int n,m;cin>>n>>m;
vector<string>v;
for(int i=0;i<n;i++){
    string s;
    cin>>s;
    v.push_back(s);
}
if(v[0][0]==v[n-1][m-1] || v[0][m-1]==v[n-1][0]){
    cout<<"YES"<<endl;return;
}
if(v[0][0]!=v[n-1][0] && v[0][0]==v[0][m-1] &&  v[n-1][0]==v[n-1][m-1]){
    for(int i=0;i<m;i++){
        if(v[0][i]==v[n-1][0]){
            cout<<"YES"<<endl;return;
        }
    }
}

if(v[0][0]!=v[n-1][0] && v[0][0]==v[0][m-1] &&  v[n-1][0]==v[n-1][m-1]){
    for(int i=0;i<m;i++){
        if(v[0][0]==v[n-1][i]){
            cout<<"YES"<<endl;return;
        }
    }
}

if(v[0][0]!=v[0][m-1] && v[0][0]==v[n-1][0] && v[0][m-1]==v[n-1][m-1]){
    for(int i=0;i<n;i++){
        if(v[i][m-1]==v[0][0]){
            cout<<"YES"<<endl;return;
        }
    }
}
if(v[0][0]!=v[0][m-1] && v[0][0]==v[n-1][0] && v[0][m-1]==v[n-1][m-1]){
    for(int i=0;i<n;i++){
        if(v[i][0]==v[n-1][m-1]){
            cout<<"YES"<<endl;return;
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