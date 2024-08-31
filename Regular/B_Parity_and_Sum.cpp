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
    vector<ll> a(n);
    cin >> a;

    ll odd = 0, even = 0;

    for (int i = 0; i < n; i++)
    {
        if ((a[i] & 1) && a[i] > odd)
        {
            odd = a[i];
        }
        if (a[i] % 2 == 0 && a[i] > even)
        {
            even = a[i];
        }
    }

    int c = 0;
    bool f = true;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != a[0] % 2)
        {
            f = false;
            break;
        }
    }
    if (f)
    {
        cout << 0 << endl;
        return;
    }
    sort(all(a));
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0 && a[i] < odd)
        {
            c++;
            a[i] = a[i] + odd;
            odd = max(odd, a[i]);
        }
    }
    f = true;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != a[0] % 2)
        {
            f = false;
            break;
        }
    }
    if (f)
    {
        cout << c << endl;
        return;
    }
    ll idx = 0;
    for (int i = 0; i < n; i++)
    {
        if ((a[i] & 1) && a[i] == odd)
        {
            idx = i;
            break;
        }
    }
    a[idx] = odd + even;
    c++;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            c++;
        }
    }
    cout << c << endl;
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