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
set<int>s;
map<int,int>f;
for(int i=0;i<n;i++){
    cin>>a[i];
    f[a[i]]++;
    s.insert(a[i]);
}
if(s.size()==1){
    cout<<n*(n-1) /2<<endl;return;
}

sort(all(a));
ll sum=accumulate(all(a),0LL);
if (2 * sum % n != 0) {
        cout << 0 << endl;
        return;
    }

ll req=2*(sum/n);

int i=0,j=n-1;
int cnt=0;
while(i<j){
if((a[i]+a[j])>req){
    j--;
}
else if((a[i]+a[j])<req){
    i++;
}
else {
    if(a[i]==a[j]){
        int ncnt=f[a[i]];
        cnt+=(ncnt*(ncnt-1))/2;
        break;
    }
    else{
        cnt+=f[a[i]]*f[a[j]];
    }
    i++;
    j--;
}
cout<<cnt<<endl;
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