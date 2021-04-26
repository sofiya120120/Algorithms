#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> dp(n), a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    dp[1] = a[1] - a[0];
    dp[2] = dp[0] + a[2] - a[0];
    for (int i = 3; i < n; i++) {
        dp[i] = a[i] - a[i - 1] + min(dp[i - 1], dp[i - 2]);
    }
    cout << dp[n - 1];
    return 0;
}