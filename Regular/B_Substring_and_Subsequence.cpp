#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) begin(x), end(x)
const int M = 1e9 + 7;
void solve()
{
    string a, b;
    cin >> a >> b;
    int n = a.size();
    int m = b.size();
    int ans = n;
    for (int i = 0; i < m; i++)
    {
        int j = i;
        int cnt = n;
        int k = 0;
        while (k < n)
        {
            if (b[j] == a[k])
            {
                j++;
                cnt--;
            }
            k++;
        }
        ans = min(ans, cnt);
    }
    cout << m + ans << endl;
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