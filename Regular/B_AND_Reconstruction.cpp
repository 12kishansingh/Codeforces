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
int n;
        cin >> n;
        vector<int> b(n - 1);
        
        for (int j = 0; j < n - 1; ++j) {
            cin >> b[j];
        }

        vector<int> a(n, 0);
        a[0] = b[0];
        bool f = true;

        for (int i = 1; i < n - 1; ++i) {
            a[i] = b[i - 1] | b[i];
            if ((a[i - 1] & a[i]) != b[i - 1]) {
                f = false;
                break;
            }
        }

        a[n - 1] = b[n - 2];
        if (f && (a[n - 2] & a[n - 1]) != b[n - 2]) {
            f = false;
        }

        if (f) {
            for (int i = 0; i < n; ++i) {
                cout << a[i] << (i + 1 == n ? '\n' : ' ');
            }
        } else {
            cout << -1 << '\n';
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