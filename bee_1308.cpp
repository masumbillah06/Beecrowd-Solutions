#include <bits/stdc++.h>
using namespace std;
int main() {
    int tcase;
    cin >> tcase;
    while (tcase--) {
        long long n, rows;
        cin >> n;
        rows = (sqrt(8*n + 1) - 1) / 2;
        cout << rows << endl;
    }
    return 0;
}
