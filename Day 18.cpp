//https://www.hackerrank.com/challenges/deque-stl/problem?isFullScreen=true

#include <iostream>
#include <deque>
using namespace std;

void printKMax(int arr[], int n, int k) {
    deque<int> dq; // stores indices

    for (int i = 0; i < k; i++) {
        while (!dq.empty() && arr[i] >= arr[dq.back()]) {
            dq.pop_back();
        }
        dq.push_back(i);
    }

    for (int i = k; i < n; i++) {
        // Print max of previous window
        cout << arr[dq.front()] << " ";

        while (!dq.empty() && dq.front() <= i - k) {
            dq.pop_front();
        }

        while (!dq.empty() && arr[i] >= arr[dq.back()]) {
            dq.pop_back();
        }

        dq.push_back(i);
    }

    cout << arr[dq.front()] << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        printKMax(arr, n, k);
    }

    return 0;
}
