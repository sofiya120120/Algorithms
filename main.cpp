#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int selection_sort(vector<int> &arr) {
    int n = (int) arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                swap(arr[i], arr[j]);
            }
        }
    }
}

int main() {
    vector<int> a = {4, 78, 65, 3, 0, 895, 23, 1, 3};
    selection_sort(a);
    for (auto elem : a) {
        cout << elem << " ";
    }
}