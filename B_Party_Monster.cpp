#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,b=0;
        string s;
        cin>>n>>s;

        for(char c:s){
            if(c=='(')  b++;
            else        b--;
        }
        if(!(n&1) && b==0)    cout<<"YES\n";
        else                cout<<"NO\n";
    }
    return 0;
}