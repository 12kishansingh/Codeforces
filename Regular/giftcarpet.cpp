#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int t;
cin>>t;

while(t--){
int n,m;cin>>n>>m;
vector<string>s;
for(int i=0;i<n;i++){
    
    string a;
    cin>>a;

    s.push_back(a);
}
string ans="vika";int it=0;
string ans1="";
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        if(s[j][i]==ans[it]){
            ans1+=s[j][i];
            it++;
            break;
        }
    }
}
if(ans1==ans)cout<<"Yes"<<endl;
else cout<<"No"<<endl;


}
return 0;
}