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
    vector<int> a(4);
    cin >> a;

    int cnt = 0;
    vector<int> idx = {0, 1};

    do {
        int sw = 0, slw = 0;

        if (a[idx[0]] > a[2]) sw++;
        else slw++;
        if (a[idx[1]] > a[3]) sw++;
        else slw++;

        if (sw > slw) cnt++;
    } while (next_permutation(all(idx)));

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
