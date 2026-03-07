#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        if (!(n&1)) {
            cout << n/2 << " " << n/2 << "\n";
        }
        else{
            long long div = -1;
            for (long long i = 3; i * i <= n; i++) {
                if (n % i == 0) {
                    div = i;
                    break;
                }
            }
            if (div == -1) {
                cout << 1 << " " << n - 1 << "\n";
            }else {
                cout << n/div << " " << n-(n/div) << "\n";
            }
        }
    }
    return 0;
}