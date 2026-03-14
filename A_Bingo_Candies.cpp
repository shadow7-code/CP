#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        unordered_map<int,int> freq;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int x;
                cin >> x;
                freq[x]++;
            }
        }
        if(n==1){
            cout << "NO\n";
            continue;
        }
        bool flag = true;
        int lt = n*(n-1);
        for(auto &i : freq){
            if(i.second > lt){
                flag = false;
                break;
            }
        }
        cout << (flag ? "YES\n" : "NO\n");
    }
    return 0;
}