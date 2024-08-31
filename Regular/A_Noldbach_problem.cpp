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

bool prime(int n) {
    if (n <= 1) return false; 
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> v;
    set<int>s;
    for (int i = 2; i <= n; i++) {
        if (prime(i)){ v.push_back(i);s.insert(i);}
    }
    // for(auto x:v){
    //     cout<<x<<" ";
    // }
    int cnt=0;

    for(int i=1;i<v.size();i++){
        int curr=v[i]+v[i-1]+1;
        if(s.find(curr)!=s.end()){
            cnt++;
        }
    }
    if(cnt>=k)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}
