#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    int x=0;
    cin >> n;
    string s;
    while (n--){
        cin >> s;
        if (s[1] == '+')   ++x;
        else               --x;
    }
    cout << x << endl;
    return 0;
}