#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        long long n, x;
        cin >> n >> x;
        vector<long long> arr;
        arr.push_back(0);
        for(int i = 0; i < n; i++){
            long long d;
            cin >> d;
            arr.push_back(d);
        }
        arr.push_back(x);
        
        n=arr.size();
        long long res = 0;
        for(int i = 1; i < n; i++){
            long long gap = arr[i] - arr[i - 1];
            if (i == n-1)    res = max(res, 2 * gap);
            else             res = max(res, gap);
        }
        cout << res << "\n";
    }
    return 0;
}