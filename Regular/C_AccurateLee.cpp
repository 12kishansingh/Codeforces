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
string s;cin>>s;

int f=1;
for(int i=0;i<n-1;i++){
    if(s[i]>s[i+1]){
        f=0;break;
    }
}
if(f){
    cout<<s<<endl;return;
}

int cnt=0,cnt1=0;
for(int i=0;i<n;i++){
    if(s[i]=='0')cnt++;
    else {break;}
}
for(int i=n-1;i>=0;i--){
    if(s[i]=='1')cnt1++;
    else {break;}
}
string s1=string(cnt+1,'0');
string s2=string(cnt1,'1');
cout<<s1+s2<<endl;

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