#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;
    if(n&1) cout << n+9 << ' ' << 9 << '\n';
    else    cout << n+4 << ' ' << 4 << '\n';
    return 0;
}