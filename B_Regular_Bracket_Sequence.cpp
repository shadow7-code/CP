#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    stack<char> st;
    int res=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(')    st.push('(');
        else{
            if(!st.empty()){
                st.pop();
                res+=2;
            }
        }
    }
    cout<<res;
    return 0;
}