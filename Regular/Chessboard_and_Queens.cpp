#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

template <typename T> 
istream &operator>>(istream &istream, vector<T> &v) {
    for (auto &it : v)
        cin >> it;
    return istream;
}

template <typename T> 
ostream &operator<<(ostream &ostream, const vector<T> &c) {
    for (auto &it : c)
        cout << it << " ";
    return ostream;
}

unordered_set<int> col, leftDia, rightDia;
int cnt=0;
 
void recur(int i, vector<vector<char>> &s) {
    if (i >= 8) {
        cnt++;
        return;
    }
    for (int j = 0; j < 8; j++) { // for each column in ith row
        int rdia = i + j;
        int ldia = i - j;
        if (s[i][j] == '*' || col.count(j) || rightDia.count(rdia) || leftDia.count(ldia))
            continue;

      
      //s[i][j] = 'q';
        col.insert(j);
        leftDia.insert(ldia);
        rightDia.insert(rdia);

       
        recur(i + 1, s);

      // backtraking
        //s[i][j] = '.';
        col.erase(j);
        leftDia.erase(ldia);
        rightDia.erase(rdia);
    }
}

void solve() {
    vector<vector<char>> s(8, vector<char>(8));
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cin >> s[i][j];
        }
    }
    recur(0, s);
    cout << cnt << endl;
   
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}
