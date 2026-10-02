#include<bits/stdc++.h>
using namespace std;

bool palin(string s){
    int l=0,r=s.size()-1;
    while(l<r){
        if(s[l]!=s[r])    return false;
        l++,r--;
    }
    return true;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string a,b;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')    a+=s[i];
            else    b+=s[i];
        }
        if(!palin(a))    cout<<"NO\n";
        else if(!palin(b))    cout<<"NO\n";
        else if(a.size()&1 && b.size()&1)    cout<<"NO\n";
        else    cout<<"YES\n";
    }
    return 0;
}