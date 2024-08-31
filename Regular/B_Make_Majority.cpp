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
    if (n == 1 && s[0] == '0')
    {
        cout << "NO" << endl;
        return;
    }
    if (n == 1 && s[0] == '1')
    {
        cout << "YES" << endl;
        return;
    }
    if (n >= 3 && s.find("111") != string::npos)
    {
        cout << "YES" << endl;
        return;
    }
    if (n >= 2 && s[0] == '1' && s[n - 1] == '1')
    {
        cout << "YES" << endl;
        return;
    }
    if (n >= 2 && (s[0] == '1' || s[n - 1] == '1') && s.find("11") != string::npos)
    {
        cout << "YES" << endl;
        return;
    }
    int cnt = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == '1' && s[i + 1] == '1')
        {
            cnt++;
            i++;
        }
    }
    if (cnt >= 2)
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
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
