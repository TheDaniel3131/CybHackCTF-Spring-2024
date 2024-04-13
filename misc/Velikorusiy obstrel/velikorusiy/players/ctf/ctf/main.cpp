#include "overseas_delights.h"
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <exception>

using namespace std;

string tale_overseas(string line, string key) {
    string result = "";
    vector<int> permutation(key.size());
    for (int i = 0; i < key.size(); i++) {
        permutation[i] = i;
    }
    sort(permutation.begin(), permutation.end(), [&](int i, int j) {
        return key[i] < key[j];
        });

    int number_of_rows = (line.size() + key.size() - 1) / key.size();
    vector<vector<char>> grid(number_of_rows, vector<char>(key.size(), ' '));
    int index = 0;
    for (int j : permutation) {
        for (int i = 0; i < number_of_rows; i++) {
            if (index < line.size()) {
                grid[i][j] = line[index++];
            }
        }
    }
    for (int i = 0; i < number_of_rows; i++) {
        for (int j : permutation) {
            if (grid[i][j] != ' ') {
                result += grid[i][j];
            }
        }
    }
    return result;
}

int main() {
    try {
        string line = "kyi_43x4_snrcspl33th44_df3lvv}{r1yp";
        string key = "secret";
        string overseas_line = tale_overseas(line, key);
        cout << "Overseas line: " << overseas_line << endl;
    }
    catch (exception& e) {
        cerr << "Exception caught: " << e.what() << endl;
        return -1;
    }
    return 0;
}
