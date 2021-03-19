#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int insertion_sort(vector<int> &arr) {
    int n = (int) arr.size();
    for (int i = 1; i < n; i++) {
        for (int j = i; j > 0; j--) {
            if (arr[j-1] < arr[j]) {
                break;
            }
            swap(arr[j], arr[j - 1]);
        }
    }
}
int main() {
    vector<int> a = {789, 45, 6, 8, 0, 0, 0, 157, 63};
    insertion_sort(a);
    for (auto elem : a) {
        cout << elem << " ";
    }
    return 0;
}