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
        string s; 
        cin >> s;

        int end = 0;
        for(int i = n-1; i >= 0; i--){
            if(s[i] == ')') end++;
            else break;
        }
        int extra = n - end;

        if(end > extra)  cout << "Yes\n";
        else             cout << "No\n";
    }
}