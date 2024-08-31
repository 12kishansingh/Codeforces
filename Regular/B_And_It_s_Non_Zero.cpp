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
vector<vector<int>>pref(20,vector<int>(200001,0));
void cal(){
    for(int i=1;i<=200000;i++){
        for(int j=0;j<20;j++){
            pref[j][i]=pref[j][i-1]+((i>>j) & 1);// prefix sum of set bits
        }
    }
}

void solve(){
int l,r;cin>>l>>r;
int mx=0;
for(int i=0;i<20;i++){
int cnt=(pref[i][r]-pref[i][l-1]);
mx=max(mx,cnt);
}
cout<<(r-l+1)-mx<<endl;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
cal();
int t;
cin>>t;

while(t--){
solve();
}
return 0;
}