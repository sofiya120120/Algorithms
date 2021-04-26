#include <bits/stdc++.h>

using namespace std;

int main () {
    vector<long long> dp(21);
    int n;
    cin >> n;
    dp[0] = 1;
    dp[1] = 3;
    for (int i = 2; i <= n; i++) {
        dp[i] = (dp[i - 1] + dp[i - 2]) * 2;
    }
    cout << dp[n];
}