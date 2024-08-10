#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, target;
    cin >> n >> target;
    
    vector<pair<int, int>> arr(n);
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i].first;
        arr[i].second = i + 1; 
    }
    
    sort(arr.begin(), arr.end());
    
    int i = 0, j = n - 1;
    
    while (i < j) {
        int sum = arr[i].first + arr[j].first;
        
        if (sum > target) {
            j--;
        } else if (sum < target) {
            i++;
        } else {
            cout << arr[i].second << " " << arr[j].second << endl;
            return 0;
        }
    }
    
    cout << "IMPOSSIBLE" << endl;

    return 0;
}
