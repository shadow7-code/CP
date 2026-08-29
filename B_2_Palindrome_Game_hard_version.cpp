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
        int cnt_0=0,cnt_1=0;
        bool flag=true;
        for(int i=0;i<n;i++)    if(s[i]=='0')    cnt_0++;
        
        for(int i=0;i<n/2;i++){
            if(s[i]!=s[n-1-i])    flag=false;
            if(s[i]!=s[n-1-i] && (s[i]=='1' || s[n-1-i]=='1'))    cnt_1++;
        }
        if(flag){
            if(cnt_0==1)        cout<<"BOB\n";
            else if(cnt_0%2)    cout<<"ALICE\n";
            else                cout<<"BOB\n";
        }else{
            if(cnt_0==2 && cnt_1==1)    cout<<"DRAW\n";
            else                        cout<<"ALICE\n";
        }
    }

    return 0;
}