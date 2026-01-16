#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--){
        long long n;
        cin >> n ; 
        vector<long long> arr(n);
        for (int i = 0; i < n-1; i++){
            cin >> arr[i];
        }

        long long sum = 0;
        for (long long i = 0 ; i < n-1 ; i++)    sum += arr[i]; 
        cout << sum * -1 << "\n";
    }
    return 0;
}