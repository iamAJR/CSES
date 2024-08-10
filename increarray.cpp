#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false); // For faster I/O
    cin.tie(nullptr);

    long long n;
    cin >> n;

    if (n == 0) {
        cout << 0;
        return 0;
    }

    long long y;
    long long count = 0;  
    cin >> y;
    long long prev = y;  

    for (long long i = 1; i < n; ++i) {
        cin >> y;
        if (y < prev) {
            count += prev - y;  
        }
        prev = max(prev,y);
    }

    cout << count;

    return 0;
}
