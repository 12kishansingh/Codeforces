#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M = 1e9 + 7;
void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int i = 0, j = 0;
    int c = 0;
    while (i < n && j < n)
    {
        if (b[j] < a[i])
        {
            c++;
            j++;
        }
        else
        {
            i++;
            j++;
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