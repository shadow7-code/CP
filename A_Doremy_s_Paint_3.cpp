#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        if (n == 1){
            cout << "Yes\n";
            continue;
        }

        unordered_map<long long, int> freq;
        for (int i = 0; i < n; i++){
            freq[arr[i]]++;
        }

        if (freq.size() == 1){
            cout << "Yes\n";
        }else if (freq.size() == 2) {
            auto i = freq.begin();
            int count1 = i->second;
            i++;
            int count2 = i->second;
            if (abs(count1 - count2) <= 1){
                cout << "Yes\n";
            }else{
                cout << "No\n";
            }
        }else {
            cout << "No\n";
        }
    }
    return 0;
}
