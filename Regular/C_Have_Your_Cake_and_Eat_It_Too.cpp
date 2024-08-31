#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) begin(x), end(x)
const int M = 1e9 + 7;
template <typename T> // cin >> vector<T>
istream &operator>>(istream &istream, vector<T> &v)
{
    for (auto &it : v)
        cin >> it;
    return istream;
}
template <typename T> // cout << vector<T>
ostream &operator<<(ostream &ostream, const vector<T> &c)
{
    for (auto &it : c)
        cout << it << " ";
    return ostream;
}
 
void solve()
{
 ll n;
    cin>>n;
    vector<pair<ll,vector<ll>>>v(3);
    for (int i=0;i<3;i++){
        v[i].first=i;
        vector<ll>a(n);
        cin>>a;
        v[i].second=a;
    }
    ll sum=accumulate(all(v[0].second),0LL);
    sum=(sum+2)/3;
    vector<vector<ll>>d={{0,1,2},{0,2,1},{1,2,0},{1,0,2},{2,1,0},{2,0,1}};
    for (int j=0;j<6;j++){
        vector<pair<ll,ll>>ans;
        ll i=0;
        bool f=1;
        ll idx=1;
        for (int k=0;k<3;k++){
            ll curr=0;
            while(i<n){
                curr+=v[d[j][k]].second[i];
                i++;
                if (curr>=sum){
                    break;
                }
 
            }
            if (curr<sum){
                f=0;
                break;
            }
            ans.push_back({idx,i});
            idx=i+1;
 
        }
        if (f){
            vector<ll>res;
            for (int i=0;i<3;i++){
                for (int k=0;k<3;k++){
                    if (d[j][k]==i){
                        res.push_back(ans[k].first);
                        res.push_back(ans[k].second);
                    }
                }
            }
            cout << res << endl;
 
            return;
        }
 
 
    }
    cout << -1 << endl;
 
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
