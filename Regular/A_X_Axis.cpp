#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

// Define directions for neighbors (up, down, left, right)
int directions[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

void stabilizeMatrix(vector<vector<int>>& matrix, int n, int m) {
    auto isValid = [&](int x, int y) {
        return x >= 0 && x < n && y >= 0 && y < m;
    };

    while (true) {
        bool found = false;
        int max_value = -1, max_i = -1, max_j = -1;
        
        // Find the cell (i,j) with strictly greater value than its neighbors
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                bool isMax = true;
                for (auto& dir : directions) {
                    int ni = i + dir[0], nj = j + dir[1];
                    if (isValid(ni, nj) && matrix[i][j] <= matrix[ni][nj]) {
                        isMax = false;
                        break;
                    }
                }
                if (isMax) {
                    if (!found || matrix[i][j] > max_value) {
                        found = true;
                        max_value = matrix[i][j];
                        max_i = i;
                        max_j = j;
                    } else if (matrix[i][j] == max_value) {
                        if (i < max_i || (i == max_i && j < max_j)) {
                            max_i = i;
                            max_j = j;
                        }
                    }
                }
            }
        }

        // If no such cell found, terminate
        if (!found) break;

        // Stabilize the cell
        matrix[max_i][max_j]--;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m));
        
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> matrix[i][j];
            }
        }

        stabilizeMatrix(matrix, n, m);

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cout << matrix[i][j] << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}
