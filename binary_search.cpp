#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> a = {1, 3, 5, 8, 10, 11, 14, 19, 100};
    int x = 111, l = 0, r = 9, m;
    bool found = false;
    while (l < r) {
        m = (l + r) / 2;
        if (a[m] == x) {
            cout << "exist";
            found = true;
            break;
        } else if (a[m] > x) {
            r = m - 1;
        } else {
            l = m + 1;
        }
    }
    if (!found) {
        if (a[l] == x) cout << "exist";
        else cout << "no";
    }
    return 0;
}