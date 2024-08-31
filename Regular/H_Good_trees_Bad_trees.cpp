#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> heights(n);
        for (int i = 0; i < n; i++) {
            cin >> heights[i];
        }
        
        int max_height = 0;
        vector<int> good_trees(n), bad_trees(n);
        
        for (int i = 0; i < n; i++) {
            if (heights[i] > max_height) {
                good_trees[i] = 1;
                max_height = heights[i];
            }
        }
        
        max_height = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (heights[i] > max_height) {
                bad_trees[i] = 1;
                max_height = heights[i];
            }
        }
        
        for (int i = 0; i < n; i++) {
            cout << bad_trees[i] << " " << good_trees[i] << endl;
        }
    }
    
    return 0;
}
