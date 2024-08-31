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
string s;cin>>s;

if(s[0]==s[s.size()-1]){
    cout<<"NO"<<endl;return;
}
int cnt=1;
char ch=s[0];
for(int i=1;i<s.size();i++){
    if(cnt<0){
        cout<<"NO"<<endl;return;
    }
if(s[i]!=ch && cnt>0){
    cnt--;
}
else if(s[i]!=ch && cnt==0){
    cnt++;
}
else if(s[i]==ch){
    cnt++;
}

}
if(cnt){
    cout<<"NO"<<endl;
}
else {
cout<<"YES"<<endl;
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