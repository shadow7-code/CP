#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t; 
    while(t--){ 
        string s;
        cin>>s;
        s.erase(s.begin()+s.find('0'));
        s.erase(s.begin()+s.find('1'));
        cout<<s<<"\n";
    } 
    return 0;
}