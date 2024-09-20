/**
 *    author:  ks888singh
 *    created: 11-09-2024 23:55:13
 **/
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
int n;cin>>n;
vector<int>a(n+1);
cout<<"? "<<1<<" "<<2<<endl;
cout.flush();
int c1;cin>>c1;
cout<<"? "<<1<<" "<<3<<endl;
cout.flush();
int c2;cin>>c2;
cout<<"? "<<2<<" "<<3<<endl;
cout.flush();
int c3;cin>>c3;
a[3]=(c2+c3-c1)/2;
a[2]=c3-a[3];
a[1]=c2-a[3];
for(int i=4;i<=n;i++){
    cout<<"? "<<1<<" "<<i<<endl;
    cout.flush();
    int sum;cin>>sum;
    a[i]=sum-a[1];
}
cout<<"! ";
for(int i=1;i<=n;i++){
    cout<<a[i]<<" ";
}cout<<endl;
cout.flush();
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
solve();
return 0;
}
