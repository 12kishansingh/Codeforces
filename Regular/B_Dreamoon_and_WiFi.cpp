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

void check(int i, string s, int pos2, int pos, int &cnt) {
    if (i == s.size()) {
        if (pos2 == pos) {
            cnt++;
        }
        return;
    }

    if (s[i] == '+') {
        check(i + 1, s, pos2 + 1, pos, cnt);
    } else if (s[i] == '-') {
        check(i + 1, s, pos2 - 1, pos, cnt);
    } else { 
        // either + or -
        check(i + 1, s, pos2 + 1, pos, cnt);
        check(i + 1, s, pos2 - 1, pos, cnt);
    }
}

void solve() {
    string s1, s2;
    cin >> s1 >> s2;

    int pos = 0;
    for (auto ch : s1) {
        if (ch == '+') pos++;
        else pos--;
    }

    int cnt = 0;
    int q= 0;
    for (char ch : s2) {
        if (ch == '?') q++;
    }

    check(0, s2, 0, pos, cnt);

    int total = pow(2, q);
    double p= static_cast<double>(cnt) / total;
    cout << fixed << setprecision(12) << p << endl;
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
