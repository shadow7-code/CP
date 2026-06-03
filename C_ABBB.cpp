#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        vector<char> st;
        for(char c:s){
            if(c=='B' && !st.empty())    st.pop_back();
            else                         st.push_back(c);
        }
        cout << st.size() << '\n';
    }
    return 0;
}