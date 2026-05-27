#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while(T--){
        long long t,h,u;
        cin >> t >> h >> u;
        if(t>2*h+u)     cout << t*2+h*3+u*2+1 << '\n';
        else            cout << t*2+h*3+u*3-min(t,u) << '\n';
    }
    return 0;
}