#include <bits/stdc++.h>

using namespace std;

int main () {
    vector<int> dp(32);
    int n;
    cin >> n;
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    for (int i = 3; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    }
    cout << dp[n];
}