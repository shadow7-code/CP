#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        string ss="Timru";
        int n;
        cin>>n;
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        cout<< (s==ss?"YES":"NO")<<endl;
    }
    return 0;
}
