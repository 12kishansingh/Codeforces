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
    int curr = 0, palice = 0;
    int pbob = 0;
    int j = n - 1, i = 0;
    int alice = 0, bob = 0;
    int cnt = 0;

    while (i <= j)
    {
        if (cnt % 2 == 1)
        {
            while (i <= j && pbob <= palice)
            {
                pbob += a[j];
                j--;
            }
            bob += pbob;
            palice = 0;
        }
        else
        {
            while (i <= j && palice <= pbob)
            {
                palice += a[i];
                i++;
            }
            alice += palice;
            pbob = 0;
        }
        cnt++;
    }
    cout << cnt << " " << alice << " " << bob << endl;
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