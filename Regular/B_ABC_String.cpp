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

bool check(string s){
    int cnt=0;
    for(int i=0;i<s.size();i++){
        if(cnt<0){
            return false;
        }
        if(s[i]=='(')cnt++;
        else cnt--;
    }
    if(cnt)return false;
    else return true;
}

void solve(){

string s;cin>>s;
string temp=s;
int n=s.size();
if(s[0]==s[s.size()-1]){
    cout<<"NO"<<endl;return;
}
//(()
for(int i=0;i<n;i++){
    if(s[i]=='A'){
        s[i]='(';
    }
    else if(s[i]=='B'){
        s[i]='(';
    }
    else{
        s[i]=')';
    }
}
if(check(s)){
    cout<<"YES"<<endl;return;
}
s=temp;
for(int i=0;i<n;i++){
    if(s[i]=='A'){
        s[i]='(';
    }
    else if(s[i]=='B'){
        s[i]=')';
    }
    else{
        s[i]=')';
    }
}
if(check(s)){
    cout<<"YES"<<endl;return;
}
s=temp;
for(int i=0;i<n;i++){
    if(s[i]=='A'){
        s[i]=')';
    }
    else if(s[i]=='B'){
        s[i]=')';
    }
    else{
        s[i]='(';
    }
}
if(check(s)){
    cout<<"YES"<<endl;return;
}
s=temp;
for(int i=0;i<n;i++){
    if(s[i]=='A'){
        s[i]=')';
    }
    else if(s[i]=='B'){
        s[i]='(';
    }
    else{
        s[i]=')';
    }
}
if(check(s)){
    cout<<"YES"<<endl;return;
}s=temp;
for(int i=0;i<n;i++){
    if(s[i]=='A'){
        s[i]='(';
    }
    else if(s[i]=='B'){
        s[i]=')';
    }
    else{
        s[i]='(';
    }
}
if(check(s)){
    cout<<"YES"<<endl;return;
}s=temp;
for(int i=0;i<n;i++){
    if(s[i]=='A'){
        s[i]=')';
    }
    else if(s[i]=='B'){
        s[i]='(';
    }
    else{
        s[i]='(';
    }
}
if(check(s)){
    cout<<"YES"<<endl;return;
}
cout<<"NO"<<endl;

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