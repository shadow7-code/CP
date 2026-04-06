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

        vector<int> a(n);
        for(auto &x : a) cin >> x;

        vector<int> freq(n + 1, 0);
        for(auto x : a) freq[x]++;

        if(freq[0] == 0)        cout << "NO\n";
        else if(freq[1] > 0)    cout << "YES\n";
        else                    cout << (freq[0] == 1 ? "YES\n" : "NO\n");
    }
}