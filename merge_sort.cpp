#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5;
vector<int> tmp(MAXN);

void merge(vector<int> &s, int l, int r) {
    if (l + 1 >= r) return;
    int m = (l + r) / 2;
    int pos1 = 0, pos2 = 0;
    while (l + pos1 < m && m + pos2 < r) {
        if (s[l + pos1] < s[m + pos2]) {
            tmp[pos1 + pos2] = s[l + pos1];
            pos1++;
        } else {
            tmp[pos1 + pos2] = s[m + pos2];
            pos2++;
        }
    }
    while (l + pos1 < m) {
        tmp[pos1 + pos2] = s[l + pos1];
        pos1++;
    }
    while (m + pos2 < r) {
        tmp[pos1 + pos2] = s[m + pos2];
        pos2++;
    }
    for (int i = 0; i < r - l; i++) {
        s[i + l] = tmp[i];
    }
}

void merge_sort(vector<int> &s, int l, int r) {
    if (l + 1 >= r) return;
    merge_sort(s, l, (l + r) / 2);
    merge_sort(s, (l + r) / 2, r);
    merge(s, l, r);
}

int main() {
    vector<int> a = {1, 5, 1, 2, 15, 0, 3};
    merge_sort(a, 0, 7);
    for (int x : a) {
        cout << x << " ";
    }
    return 0;
}