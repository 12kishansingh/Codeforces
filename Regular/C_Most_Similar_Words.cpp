#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M = 1e9 + 7;
int diff(string s, string s1)
{
    int n = s.length();
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cnt += abs(int(s[i]) - int(s1[i]));
    }
    return cnt;
}
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    int ans = INT_MAX;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i + 1; j < v.size(); j++)
        {
            string s = v[i];
            string s1 = v[j];
            int n = s.length();
            int cnt = 0;
            for (int idx = 0; idx < n; idx++)
            {
                cnt += abs(int(s[idx]) - int(s1[idx]));
            }
            ans=min(ans,cnt);
        }
    }
    cout<<ans<<endl;
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