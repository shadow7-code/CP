#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int s1,s2,s3,s4;
        cin >> s1 >> s2 >> s3 >> s4;
        int w1=max(s1,s2);
        int w2=max(s3,s4);
        int l1=min(s1,s2);
        int l2=min(s3,s4);
        cout << (min(w1,w2)>max(l1,l2) ? "YES" : "NO") << '\n';
    }
    return 0;
}