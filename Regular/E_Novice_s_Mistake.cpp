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

vector<int>v;
string s=to_string(n);

int sum=n;
int idx=0;
while(sum<=n*10000){
    v.push_back(sum);
    sum*=10;
    sum+=s[idx]-'0';
    idx++;
    idx%=s.size();
}
// for(auto x:v){
//     cout<<x<<endl;
// }
vector<pair<int,int>>vp;
for(int a=1;a<=10000;a++){
    for(auto x:v){
        // na-b=x
        string s1=to_string(x);
        int b=n*a-x;
        if((a*s.size())-b==s1.size() && b<=min(10000,a*n)&& b>=1){
            vp.push_back({a,b});
        }
    }
}
cout<<vp.size()<<endl;
for(auto x:vp){
    cout<<x.first<<" "<<x.second<<endl;
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