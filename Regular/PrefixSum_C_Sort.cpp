#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) begin(x), end(x)
const int M=1e9+7;
template <typename T> // cin >> vector<T>
istream &operator>>(istream &istream, vector<T> &v)
{
for (auto &it : v)
cin >> it;
return istream;
}
template <typename T> // cout << vector<T>
ostream &operator<<(ostream &ostream, const vector<T> &c)
{
for (auto &it : c)
cout << it <<" ";
return ostream;
}


void solve(){
int n,q;cin>>n>>q;
string a,b;cin>>a>>b;
a="0"+a;
b="0"+b;
vector<vector<int>>prefA(n+1,vector<int>(26)),prefB(n+1,vector<int>(26));
for(int i=1;i<=n;i++){
    prefA[i]=prefA[i-1];
    int curr=a[i]-'a';
    prefA[i][curr]++;
}
for(int i=1;i<=n;i++){
    prefB[i]=prefB[i-1];
    int curr=b[i]-'a';
    prefB[i][curr]++;
}
while(q--){
    int l,r;cin>>l>>r;
    int ans=0;
    for(int i=0;i<26;i++){
        int cntA=prefA[r][i]-prefA[l-1][i];
        int cntB=prefB[r][i]-prefB[l-1][i];
        if(cntA>=cntB){
            ans+=cntA-cntB;
        }
    }
cout<<ans<<endl;
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