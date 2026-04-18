#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin >> t;
    while(t--){
        long long n; 
        cin >> n;
        while(true){
            long long x = n;
            bool flag = true;
            while(x){
                int d = x % 10;
                x /= 10;
                if(d != 0 && n % d != 0){
                    flag = false;
                    break;
                }
            }
            if(flag){
                cout << n << "\n";
                break;
            }
            n++;
        }
    }
}