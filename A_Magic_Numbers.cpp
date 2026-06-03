#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    if(s[0]!='1' || s.find("444")!=string::npos || s.find_first_not_of("14")!=string::npos){
        cout<<"NO\n";
    }else{
        cout<<"YES\n";
    }

    return 0;
}