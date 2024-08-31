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
vector<int>a(n);
cin>>a;
vector<ll>pref(n);

pref[0]=a[0];
for(int i=1;i<n;i++){
    pref[i]=pref[i-1]+a[i];
}
string s;cin>>s;
int i=0,j=s.size()-1;
ll sum=0;
while(i<j){
while(i<n && s[i]=='R')i++;
while(j>=0 && s[j]=='L')j--;

if(i<j){
    if(i>0){
        sum+=(pref[j]-pref[i-1]);
    }
    else{
        sum+=pref[j];
    }
    i++;j--;
}
}
cout<<sum<<endl;
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