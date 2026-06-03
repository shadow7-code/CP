#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n%7==0){
            cout << n << '\n';
            continue;
        }
        for(int j=0;j<=9;j++){
            int x=n-n%10+j;
            if(x%7==0){
                cout << x << '\n';
                break;
            }
        }
    }
    return 0;
}