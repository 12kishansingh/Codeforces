#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M = 1e9 + 7;
class mycmp{// functor-object that can be treated as function
    public:
    bool operator()(int a,int b) {
        return a>b;
    }
};
bool cmp(int a, int b)
{ // define comparator function
    // if(a<b)return 1;// will sort in increasing order
    if (a > b)
        return 1; // return a>b;
    else
        return 0;
}
bool cmp1(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.first == p2.first)
        return p1.second > p2.second;
    return p1.first > p2.first;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(),a.end(),mycmp());//functors
    sort(a.begin(), a.end(), cmp); // comparator function-defined by user
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    vector<pair<int, int>> vp = {{1, 2}, {34, 32}, {23, 34}, {23, 45}};
    sort(vp.begin(), vp.end(), cmp1);
    for (auto x : vp)
    {
        cout << x.first << " " << x.second << endl;
    }
    //LAMDA Funciton ,[] is capture clause, use outer scope variable
    sort(a.begin(),a.end(),[](int a,int b){
        return a>b;
    });
    /* auto lamda=[](int a,int b){
        return a>b;
    };
    sort(a.begin(),a.end(),Lamda);
    */
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