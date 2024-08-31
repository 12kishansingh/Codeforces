#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) begin(x), end(x)
const int M = 1e9 + 7;
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
        cout << it << " ";
    return ostream;
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
     vector<int> freq(26, 0); 
    

    for (char c : s) {
        freq[c - 'a']++;
    }

    string ans = "";
    bool cnt = true;


    while (cnt) {
        cnt = false;
        for (int i = 0; i < 26; ++i) {
            if (freq[i] > 0) {
                ans += (char)(i + 'a');
                freq[i]--;
                if (freq[i] > 0) {
                    cnt = true; 
                }
            }
        }
    }

    cout << ans << "\n";

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}
