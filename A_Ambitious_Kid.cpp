#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n; 
    vector<long long> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    long long res = INT_MAX;
    for (int i = 0; i < n; i++){
        res = min(res, abs(arr[i]));
    }
    cout << res << "\n";
    return 0;
}