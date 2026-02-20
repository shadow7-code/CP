#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();

        int zero = count(s.begin(), s.end(), '0');
        int one = n - zero;
        int alt0 = 0, alt1 = 0;
        int count = 0;

        for (char ch :s) {
            if (ch == '1')    alt0++;
            else              alt1++;       

            if (alt0 > zero || alt1 > one)  break;
            count++;
        }

        cout << n - count << "\n";
    }
}