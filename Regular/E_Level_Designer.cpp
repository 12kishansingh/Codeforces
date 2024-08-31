#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;

vector<vector<int>> ancestors;
vector<int>level;

bool check(int u, int v) {
    if (level[u] > level[v])
        return false;
    return find(ancestors[v].begin(), ancestors[v].end(), u) != ancestors[v].end();
}
void solve() {
    int n, q;
    cin >> n >> q;

    ancestors.resize(n + 1);
    level.resize(n + 1, 0);

    int type, u, v;
    while(q--){
        cin >> type >> u >> v;
        if (type == 1) {
            ancestors[v].push_back(u);
            level[v]=level[u]+1;
        } else {
            if (check(u, v))
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int t;
//cin>>t;
t=1;
while(t--){
solve();
}
return 0;
}

