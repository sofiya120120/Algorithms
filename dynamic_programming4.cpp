#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> dp(n), a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    dp[0] = a[0];
    if (n > 1) dp[1] = a[1];
    for (int i = 2; i < n; i++) {
        dp[i] = a[i] + min(dp[i - 1], dp[i - 2]);
    }
    cout << dp[n - 1];
}