#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) begin(x), end(x)
const int M = 1e9 + 7;
void solve()
{
    int n, f, k;
    cin >> n>>f>>k;
    k--;f--;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int fav=a[f];
    sort(a.begin(), a.end(), greater<int>());
    if(k==n-1){
        cout<<"YES"<<endl;return;
    }
    if(a[k]<fav){
        cout<<"YES"<<endl;return;
    }
    if(a[k]>fav){
        cout<<"NO"<<endl;return;
    }
    if(a[k]==a[k+1]){
        cout<<"MAYBE"<<endl;return;
    }
    else{
        cout<<"YES"<<endl;
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