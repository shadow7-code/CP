#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> freq(26, 0);
		for (char c : s)	freq[c - 'a']++; 

		long long odds = 0;
		for (int i = 0; i < 26; i++)	odds += freq[i] & 1; 

		if (odds > k + 1)	cout << "NO" << endl;
		else            	cout << "YES" << endl;
    }
}