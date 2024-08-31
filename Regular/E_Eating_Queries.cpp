#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M = 1e9 + 7;
void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
    }
    sort(a.begin(), a.end(),greater<int>());
    // for(auto x:a){
    //     cout<<x<<" ";
    // }cout<<endl;
    vector<int> p(n);
    p[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        p[i] = p[i - 1] + a[i];
    }
   // sort(p.begin(), p.end());
    //  for(auto x:p){
    //     cout<<x<<" ";
    // }cout<<endl;

    while (q--)
    {
        int x;
        cin >> x;
        if (x > s)
        {
           cout << -1 << endl;
            continue;
        }
        auto it = lower_bound(p.begin(), p.end(), x) - p.begin();
       cout << it + 1 << endl;
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