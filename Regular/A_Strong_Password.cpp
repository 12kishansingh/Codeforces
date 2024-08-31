#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) begin(x), end(x)
const int M=1e9+7;

template <typename T> // cin >> vector<T>
istream &operator>>(istream &istream, vector<T> &v) {
    for (auto &it : v)
        cin >> it;
    return istream;
}

template <typename T> // cout << vector<T>
ostream &operator<<(ostream &ostream, const vector<T> &c) {
    for (auto &it : c)
        cout << it << " ";
    return ostream;
}

void solve() {
    string s;
    cin >> s;
   
    string res = "";
    int mx = 0;

    for (char c = 'a'; c <= 'z'; c++) {
        for (int i = 0; i <= s.size(); i++) {
            string curr = s.substr(0, i) + c + s.substr(i);
            int t = 2; 
            for (int j = 1; j <= s.size(); j++) {
                if (curr[j] == curr[j - 1]) 
                    t += 1;
                else 
                    t += 2;
            }
            if (t> mx) {
                mx = t;
                res = curr;
            }
        }
    }
    cout << res << endl;
}
    
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
    return 0;
}
