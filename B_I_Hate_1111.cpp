#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        bool flag=false;
        while(x>=0){
            if(x%11==0){
                flag=true;
                break;
            }
            x-=111;
        }
        cout << (flag?"YES":"NO") << '\n';
    }
}