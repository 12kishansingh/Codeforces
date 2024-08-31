#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int count_possible_pairs(int n, vector<int>& ids, vector<int>& colors) {
    unordered_set<int> special_features[10];  // Assuming IDs have digits from 0 to 9

    for (int i = 0; i < n; ++i) {
        int toy_id = ids[i];
        int color = colors[i];

        // Extracting special features from the toy ID
        vector<int> features;
        while (toy_id > 0) {
            features.push_back(toy_id % 10);
            toy_id /= 10;
        }

        // Adding the toy to the special features set
        for (int feature : features) {
            special_features[feature].insert(color);
        }
    }

    int total_pairs = 0;

    // Loop through each pair of toys
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int id_i = ids[i], color_i = colors[i];
            int id_j = ids[j], color_j = colors[j];

            // Check if the pair has no common color and no common special features
            bool has_common_feature = false;
            vector<int> features_j;
            while (id_j > 0) {
                int digit = id_j % 10;
                features_j.push_back(digit);
                if (special_features[digit].count(color_i)) {
                    has_common_feature = true;
                    break;
                }
                id_j /= 10;
            }

            if (!has_common_feature && color_i != color_j) {
                total_pairs++;
            }
        }
    }

    return total_pairs / 2;  // Each pair is counted twice, so dividing by 2
}

int main() {
    int n;
    cin >> n;

    vector<int> ids(n);
    vector<int> colors(n);

    for (int i = 0; i < n; ++i) {
        cin >> ids[i];
    }

    for (int i = 0; i < n; ++i) {
        cin >> colors[i];
    }

    int result = count_possible_pairs(n, ids, colors);
    cout << result << endl;

    return 0;
}
