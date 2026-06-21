#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int min_operations = 1000000;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        if (num < 0) {
            num = -num;
        }
        if (num < min_operations) {
            min_operations = num;
        }
    }
    cout << min_operations << "\n";
    return 0;
}