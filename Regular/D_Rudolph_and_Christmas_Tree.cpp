#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M = 1e9 + 7;
void solve()
{
    int n, d, h;
    cin >> n >> d >> h;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long double area = (long double)d * h / 2.0;
    cout << fixed << setprecision(8);

    for (int i = 0; i < n - 1; ++i)
    {
        if (i != n && a[i + 1] - a[i] < h)
        {
            long double H = a[i + 1] - a[i];
            area += (long double)(((d * (h - H)) / h + d) * H) / 2.0;
        }
        else
        {
            area += (long double)d * h / 2.0;
        }
    }
    cout << area << endl;
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