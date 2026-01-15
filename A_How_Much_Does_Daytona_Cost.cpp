#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--){
        long long n, k;
        cin >> n >> k; 
        vector<long long> arr(n);
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }

        bool flag = false; 
        for (int i = 0; i < n; i++){
            if (arr[i] == k){
                flag = true; 
                break; 
            }
        }
        if (flag)     cout << "YES" << "\n";
        else          cout << "NO" << "\n";
    }
    return 0;
}
