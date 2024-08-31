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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int cnt = 0;

    vector<int> st = {a, b};
    vector<int> sl = {c, d};

    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            if (i == j)
                continue;

            for (int k = 0; k < 2; ++k)
            {
                for (int l = 0; l < 2; ++l)
                {
                    if (k == l)
                        continue;

                    int s1 = st[i];
                    int s2 = st[j];
                    int b1 = sl[k];
                    int b2 = sl[l];

                    int sw = 0;
                    int slw = 0;

                    if (s1 > b1)
                        sw++;
                    else if (s1 < b1)
                        slw++;

                    if (s2 > b2)
                        sw++;
                    else if (s2 < b2)
                        slw++;

                    if (sw > slw)
                        cnt++;
                }
            }
        }
    }

    cout << cnt << endl;
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
