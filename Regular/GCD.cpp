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

int gcd(int a,int b,int &x,int &y){// extended euclid algo 4x+3y=gcd(4,3); to get x,and y
    if(a==0){
        x=0;y=1;
        return b;
    }
    int x1,y1;
    int g=gcd(b%a,a,x1,y1);
    x=y1-(b/a)*x1;// remainder
    y=x1;
    return g;
}

void solve(){
int a,b;cin>>a>>b;int x,y;
cout<<gcd(a,b,x,y)<<endl;
cout<<x<<" "<<y<<endl;
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