#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) begin(x), end(x)
const int M = 1e9 + 7;
void solve()
{
    ll x;
    cin >> x;
    string s = to_string(x);
    if (s[0] != '1')
    {
        cout << "NO" << endl;
        return;
    }
    int carry = 0;
    for (int i = s.length() - 1; i > 0; i--)
    {
        ll d = s[i] - '0';
        d -= carry;
        if (d == -1)
        {
            d = 9;
        }
        if (d >= 0 && d <= 8)
        {
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
        carry = 1;
    }
    cout << "YES" << endl;
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