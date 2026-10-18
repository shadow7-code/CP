#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin>>s;
    string res="";
    for(int i=0;i<s.size();i++){
        char c=tolower(s[i]);
        if(c=='a'||c=='o'||c=='y'||c=='e'||c=='u'||c=='i')    continue;
        res+='.';
        res+=c;
    }
    cout<<res<<"\n";
    return 0;
}