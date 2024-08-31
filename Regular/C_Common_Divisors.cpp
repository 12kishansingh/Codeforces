#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    ll a[n];
    ll g = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        g = __gcd(g, a[i]);
    }
    ll cnt = 0;
    for (int i = 1; 1LL*i * i <= g; i++)
    {
        if (g% i == 0)
        {
            cnt++;
            if (i != g / i)
                cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}