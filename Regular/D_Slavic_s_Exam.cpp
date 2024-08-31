#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) begin(x), end(x)
const int M = 1e9 + 7;

template <typename T>
istream &operator>>(istream &istream, vector<T> &v)
{
    for (auto &it : v)
        cin >> it;
    return istream;
}

template <typename T>
ostream &operator<<(ostream &ostream, const vector<T> &c)
{
    for (auto &it : c)
        cout << it << " ";
    return ostream;
}

void solve()
{
    string s, t;
    cin >> s >> t;

    int i = 0, j = 0;
    while (i < s.length() && j < t.length())
    {
        if (s[i] == t[j] || s[i] == '?')
        {
            if (s[i] == '?')
                s[i] = t[j];
            j++;
        }
        i++;
    }

    if (j < t.length())
    {
        cout << "NO\n";
    }
    else
    {
        for (char &c : s)
        {
            if (c == '?')
                c = 'a';
        }
        cout << "YES\n"
             << s << "\n";
    }
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
