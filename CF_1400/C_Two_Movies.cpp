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
    vector<int> a(n);
    cin >> a;
    vector<int> b(n);
    cin >> b;

    int v1 = 0, v2 = 0, p = 0, neg = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < b[i])
            v2 += b[i];
        else if (a[i] > b[i])
            v1++;
        else if (a[i] == 1)
            p++;
        else if (a[i] == -1)
            neg++;
    }
    while (p--)
    {
        if (v1 < v2)
            v1++;
        else
            v2++;
    }
    while (neg--)
    {
        if (v1 > v2)
            v1--;
        else
            v2--;
    }
    cout << min(v1, v2) << endl;
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