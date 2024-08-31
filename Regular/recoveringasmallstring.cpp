#include <bits/stdc++.h>
using namespace std;
string Word(int n) {
    for(int i = 0; i < 26; ++i) {
        for(int j = 0; j < 26; ++j) {
            for(int k = 0; k < 26; ++k) {
                if(i + j + k + 3 == n) {
                    string s = "";
                    s += char('a' + i);
                    s += char('a' + j);
                  s+= char('a' + k);
                    return s;
                }
            }
        }
    }
    return ""; 
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        
        cout << Word(n) << endl;
    }

    return 0;
}
