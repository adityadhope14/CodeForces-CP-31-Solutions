#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string grid[10];
        for (int i = 0; i < 10; i++) {
            cin >> grid[i];
        }
        int ans = 0;
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (grid[i][j] == 'X') {
                    int points = min(min(i, 9 - i),min(j, 9 - j)) + 1;
                    ans += points;
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}