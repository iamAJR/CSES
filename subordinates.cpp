#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int countReports(int x, const unordered_map<int, vector<int>>& m, unordered_map<int, int>& memo) {
    if (memo.find(x) != memo.end()) {
        return memo[x];
    }

    int cnt = 0;
    if (m.find(x) != m.end()) {
        for (int report : m.at(x)) {
            cnt += 1 + countReports(report, m, memo); 
        }
    }

    memo[x] = cnt;
    return cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    unordered_map<int, vector<int>> m;
    int x;

    for (int i = 2; i <= n; ++i) {
        cin >> x;
        m[x].push_back(i); 
    }

    unordered_map<int, int> memo; 

    for (int i = 1; i <= n; ++i) {
        countReports(i, m, memo);
    }

    for (int i = 1; i <= n; ++i) {
        cout << memo[i] << " ";
    }

    return 0;
}
