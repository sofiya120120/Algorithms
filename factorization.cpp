#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    vector<int> del;
    cin >> n;
    for (long long i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            del.push_back(i);
            n /= i;
        }
    }
    if (n != 1) {
        del.push_back(n);
    }
    sort(del.begin(), del.end());
    for (long long i : del) {
        cout << i << " ";
    }
    return 0;
}
