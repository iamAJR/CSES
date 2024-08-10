#include <iostream>
using namespace std;
 
void wierd(long long x) {
    while (x != 1) {
        cout << x << " ";
        if (x % 2 == 0) {
            x = x / 2;
        } else {
            x = x * 3 + 1;
        }
    }
    cout << x; 
}
 
int main() {
 
 
    long long  n;
    cin >> n;
 
    wierd(n);
 
    return 0;
}  