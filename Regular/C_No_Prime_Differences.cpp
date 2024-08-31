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
bool prime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0)return false;
    }
    return true;
}

void solve(){
int n,m;cin>>n>>m;
if(prime(m)){
    
    int a[n+1][m+1]={0};
    int cnt=1;
     int odd=n/2;
    odd*=m;
    odd++;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i%2==0){
                a[i][j]=cnt++;
            }
            else{
                 a[i][j]=odd++;
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<a[i][j]<<" ";
        }cout<<endl;
    }

}
else{
    int cnt=0;
    for(int i=1;i<=m*n;i++){
        cnt++;
        if(cnt<m){
            cout<<i<<" ";
        }
        else if(cnt==m){
            cout<<i<<endl;
            cnt=0;
        }
    }
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