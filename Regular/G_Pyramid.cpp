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


void solve(int n,int cnt){
if(n==0){
   // cout<<s<<endl;
    return;
}
for(int a=0;a<cnt;a++){
    cout<<" ";
}
for(int i=0;i<(2*n-1);i++){
    cout<<'*';
}cout<<endl;


return solve(n-1,cnt+1);




}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

int n;cin>>n;

solve(n,0);

return 0;
}