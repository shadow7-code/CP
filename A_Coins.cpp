#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n,k;
        cin >> n >> k;
        if( n&1 && !(k&1) )  cout<<"NO"<<"\n";
        else                cout<<"YES"<<"\n";
    }
    return 0;
}
