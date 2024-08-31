#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int sum = 0;
        for (int i = 0; i < 26; ++i) {
            sum += count(s.begin(), s.end(), 'A' + i) >= i + 1;
            cout<<sum;
        }
        cout << sum <<endl;
    }
    return 0;
}
/* prints abcde...as i varies till n
 for(int i=0;i<n;i++){
            char ch='a'+i;
            cout<<ch;
        }
*/
