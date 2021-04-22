#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e5 + 5;
bool used[maxn];
vector<vector<int>> graph(maxn, vector<int>());

void dfs(int v) {
    used[v] = true;
    for (int u : graph[v]) {
        if (!used[u]) {
            dfs(u);
        }
    }
}

int main() {
    int n, m, a, b;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> a >> b, a--, b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    dfs(0);
    return 0;
}