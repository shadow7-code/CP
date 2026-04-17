#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        set<long long> st;
        long long even = 0, odd = 0;
        bool flag = false;

        st.insert(0);
        for(int i = 0; i < n; i++) {
            if(i % 2 == 0) even += a[i];
            else odd += a[i];

            long long diff = even - odd;
            if(st.count(diff)) {
                flag = true;
                break;
            }
            st.insert(diff);
        }
        cout << (flag ? "YES\n" : "NO\n");
    }
}