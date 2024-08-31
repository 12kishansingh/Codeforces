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
bool check(int i,int j,vector<int>&a){

if(i>j){
    return true;
}

if(a[i]!=a[j]){
    return false;
}
else{
   return check(i+1,j-1,a);
}

}


void solve(){
int n;cin>>n;
vector<int>a(n);
cin>>a;

cout<<(check(0,n-1,a)? "YES":"NO")<<endl;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int t;
//cin>>t;
t=1;
while(t--){
solve();
}
return 0;
}