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
int  recur(int i,int s,int e,int &sum){

if(i==e){
    sum++;
    return sum;
}
if(i>e){
    return 0;
}

int a=recur(i+1,s,e,sum);
int b=recur(i+2,s,e,sum);
int c=recur(i+3,s,e,sum);

return a+b+c;

}

void solve(){
int s,e;cin>>s>>e;
int sum=0;
recur(s,s,e,sum);
cout<<sum<<endl;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

solve();
return 0;
}