#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) begin(x), end(x)
const int M = 1e9 + 7;
void solve()
{
    int n;
    cin >> n;
    int x;
    cin >> x;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        a[i] = b[i];
    }

    sort(a, a + n);
    int one = 0, y = 0;
    int i = 0, j = n - 1;
    bool f = 0;
    while (i < j)
    {
        if(a[i]+a[j]==x){
            one=a[i];
            y=a[j];
            f=1;break;
        }
        else if (a[i] + a[j] > x)
        {
            j--;
        }
        else if (a[i] + a[j] < x)
        {
            i++;
        }
       
    }
    int idx = 0, idx1 = 0;
    bool fg=0,fg1=0;
    for (int i = 0; i < n; i++)
    {
        if (fg==0 && b[i] == one)
        {
            idx = i + 1;
            fg=1;
        }
        else if ( fg1==0 && b[i] == y)
        {
            idx1 = i + 1;
            fg1=1;
        }
    }
    if (f == 0)
    {
        cout << "IMPOSSIBLE" << endl;
        return;
    }
    if(idx==idx1){
        cout<<idx<<" "<<idx1<<endl;return;
    }
    if (idx < idx1)
    {
        cout << idx << " " << idx1 << endl;
    }
    else
    {
        cout << idx1 << " " << idx << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    // cin>>t;
    t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}