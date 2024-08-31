#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;
        
        int hr = stoi(s.substr(0, 2));
        int min = stoi(s.substr(3, 2));
        
        string time;
        if (hr >= 12) {
            time = "PM";
            if (hr > 12) hr -= 12;
        } else {
            time = "AM";
            if (hr == 0) hr = 12;
        }
        
        cout << setfill('0') << setw(2) << hr << ":" << setw(2) << min << " " << time<< endl;
    }
    
    return 0;
}
