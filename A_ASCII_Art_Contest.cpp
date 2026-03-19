#include <bits/stdc++.h>
using namespace std;

int main() {
    int g, c, l;
    cin >> g >> c >> l;

    int maxi = max({g, c, l});
    int mini = min({g, c, l});
    if (maxi - mini >= 10)    cout << "check again";
    else                      cout << "final " << (g + c + l) - maxi - mini;
}