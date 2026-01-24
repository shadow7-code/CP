#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int>arr(5);
    for (int i = 1; i < 5; i++) {
        cin >> arr[i];
    }
    string s;
    cin >> s;

    int cal = 0;
    for (char c : s) {
        cal += arr[c - '0'];
    }
    cout << cal << '\n';
    return 0;
}
