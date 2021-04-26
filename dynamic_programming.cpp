#include <bits/stdc++.h>

using namespace std;

int main () {
    vector<int> dp(1001);
    int n;
    cin >> n;
    dp[0] = 1;
    dp[1] = 1;
    for (int i = 2; i <= n; i++) {
        dp[i] = (dp[i - 1] + dp[i - 2]) % 10;
    }
    cout << dp[n];
}