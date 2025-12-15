//Consider an -element array, , where each index  in the array contains a reference to an array of  integers (where the value of  varies from array to array).
//See the Explanation section below for a diagram.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    // Vector of vectors to store variable-sized arrays
    vector<vector<int>> arr(n);

    // Read the arrays
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        arr[i].resize(k);
        for (int j = 0; j < k; j++) {
            cin >> arr[i][j];
        }
    }

    // Process queries
    for (int i = 0; i < q; i++) {
        int x, y;
        cin >> x >> y;
        cout << arr[x][y] << endl;
    }

    return 0;
}
