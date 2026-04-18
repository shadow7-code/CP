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

        int correct = 0,res = 0;
        for(char c : s){
            if(c == '(')    correct++;
            else            correct--;

            if(correct < 0){
                res++;
                correct = 0;
            }
        }
        cout << res << "\n";
    }
}