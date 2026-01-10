#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        string s;
        cin >> s; 
        bool flag = false;
        int cnt = 0;

        for (int i = 0; i < n; i++){
            if (s[i] =='.' && s[i+1]=='.' && s[i+2]=='.'){
                flag = true;
                break;
            }
            if(s[i] =='.')    cnt++;
        }
        if(!flag)    cout << cnt << endl;
        else         cout << 2 << endl;
    }
    return 0;
}
