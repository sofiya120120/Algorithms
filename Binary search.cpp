#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, found;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < k; i++) {
        cin >> found;
        int left = 0, right = n - 1, mid;
        bool ok = false;
        while (left < right - 1) {
            mid = (left + right) / 2;
            if (a[mid] == found) {
                ok = true;
                break;
            } else if (a[mid] > found) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        if (a[left] == found || a[right] == found) ok = true;
        if (ok) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
