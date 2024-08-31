#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) begin(x), end(x)
const int M = 1e9 + 7;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<vector<char>> a(n + 1, vector<char>(m + 1));
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            cin >> a[i][j];
        }
    }

    int num = 0;
    vector<int> row(n + 1, 0);
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            if (a[i][j] == '#')
            {
                row[i]++;
                num++;
            }
        }
    }

    int frow = 0;
    int mxrow = *max_element(row.begin() + 1, row.end());
    for (int i = 1; i <= n; ++i)
    {
        if (row[i] > 0)
        {
            frow = i;
            break;
        }
    }

    vector<int> col(m + 1, 0);
    for (int i = 1; i <= m; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if (a[j][i] == '#')
            {
                col[i]++;
            }
        }
    }

    int fcol = 0;
    int mxcol = *max_element(col.begin() + 1, col.end());
    for (int i = 1; i <= m; ++i)
    {
        if (col[i] > 0)
        {
            fcol = i;
            break;
        }
    }

    if (num == 1)
    {
        cout << frow << " " << fcol << endl;
        return;
    }

    int r = frow + mxcol / 2;
    int c = fcol + mxrow / 2;
    cout << r << " " << c << endl;
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
