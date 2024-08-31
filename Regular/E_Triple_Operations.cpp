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

const int mx=2000007;

int a[mx],pref[mx];
int cal(int n){
    int cnt=0;
    while(n>0){
        cnt++;
        n=n/3;
    }
    return cnt;
}

void solve(){
int l,r;cin>>l>>r;

cout<<pref[r]-pref[l-1]+a[l]<<endl;

}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
pref[0]=0;
for(int i=1;i<mx;i++){
a[i]=cal(i);
pref[i]=pref[i-1]+a[i];
}
int t;
cin>>t;

while(t--){
solve();
}
return 0;
}