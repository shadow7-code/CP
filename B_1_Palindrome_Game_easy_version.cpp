#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt=0;
        for(int i=0;i<n;i++)    if(s[i]=='0')        cnt++;
        if(cnt==1)        cout<<"BOB\n";
        else if(cnt%2)    cout<<"ALICE\n";
        else              cout<<"BOB\n";
    }
    return 0;
}