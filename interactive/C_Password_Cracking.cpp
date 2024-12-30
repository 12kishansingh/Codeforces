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
bool check(string s) {
    cout << "? " << s << endl;
    cout.flush();
    int res;cin >> res;
    return res;
}

void solve() {
    int n;
    cin >> n;
    string t="";
    while (t.size() < n) {
        if (check(t + "0")) {
            t += "0";
        } 
        else if(check(t+"1")){
            t += "1";
        }
        else{
            break;
        }
    }
    while (t.size() < n) {
        if (check("0"+t)) {
            t = "0"+t;
        }
         else {
            t = "1"+t;
        }
    }
    cout << "! " << t << endl;
    cout.flush();


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