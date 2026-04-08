#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    unordered_map<string, int> freq;
    while (n--) {
        string s;
        cin >> s;
        if (freq[s] == 0) {
            cout << "OK\n";
            freq[s] = 1;
        } else {
            string ns = s + to_string(freq[s]);
            cout << ns << '\n';
            freq[s]++;
            freq[ns] = 1;
        }
    }
    return 0;
}