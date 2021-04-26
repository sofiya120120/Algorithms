#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n;
    vector<int> base(n);
    for (int i = 0; i < n; i++) {
        cin >> base[i];
    }
    cin >> k;
    sort(base.begin(), base.end());
    int a, b, x1, x2;
    for (int i = 0; i < k; i++) {
        cin >> a >> b;
        int left = 0, right = n - 1, mid;
        while (left < right - 1) {
            mid = (left + right) / 2;
            if (base[mid] >= a) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        x1 = left;
        while (x1 < n && base[x1] < a) {
            x1++;
        }
        left = 0, right = n - 1;
        while (left < right - 1) {
            mid = (left + right) / 2;
            if (base[mid] <= b) {
                left = mid;
            } else {
                right = mid - 1;
            }
        }
        x2 = right;
        while (x2 >= 0 && base[x2] > b) {
            x2--;
        }
        cout << max(0, x2 - x1 + 1) << " ";
    }
    return 0;
}
