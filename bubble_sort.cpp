#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int bubble_sort(vector<int> &arr) {
    int n = (int) arr.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    vector<int> a = {789, 45, 6, 8, 0, 0, 0, 157, 63};
    bubble_sort(a);
    for (auto elem : a) {
        cout << elem << " ";
    }
    return 0;
}