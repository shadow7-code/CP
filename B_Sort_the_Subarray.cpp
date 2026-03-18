#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for(int &x : a) cin >> x;
        for(int &x : b) cin >> x;

        int l = 0, r = n - 1;

        while(l < n && a[l] == b[l]) l++;
        while(r >= 0 && a[r] == b[r]) r--;

        for(int i = l - 1; i >= 0; i--){
            if(b[i] <= b[i + 1]) l--;
            else break;
        }
        for(int i = r + 1; i < n; i++){
            if(b[i] >= b[i - 1]) r++;
            else break;
        }
        cout << l + 1 << " " << r + 1 << "\n";
    }
    return 0;
}