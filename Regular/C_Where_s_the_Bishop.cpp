#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M = 1e9 + 7;
void solve()
{
    vector<string> v;
    for (int i = 0; i < 8; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    vector<int> v1;
    for (int i = 0; i < 8; i++)
    {
        int cnt = 0;
        for (int j = 0; j < 8; j++)
        {
            if (v[i][j] == '#')
            {
                cnt++;
            }
        }
        v1.push_back(cnt);
    }
    int ans = 0;
    for (int i = 1; i < v1.size() - 1; i++)
    {
        if (v1[i] == 1 && v1[i + 1] == 2 && v1[i - 1] == 2)
        {
            ans = i;
            break;
        }
    }
    for (int i = 0; i < 8; i++)
    {
        int cnt = 0;
        for (int j = 0; j < 8; j++)
        {
            if (v[i][j] == '#' && ans == i)
            {
                cout << i + 1 << " " << j + 1 << endl;
                break;
            }
        }
    }
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