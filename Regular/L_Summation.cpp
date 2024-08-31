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
ll sum(vector<int>&a,int i,ll s){

if(i==a.size()){
    return s;
}
ll curr=s+a[i];
return sum(a,i+1,curr);
}

void solve(){
int n;cin>>n;
vector<int>a(n);
cin>>a;
cout<<sum(a,0,0LL);

}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

solve();

return 0;
}