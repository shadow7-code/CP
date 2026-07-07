#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int>res;
    string t=s;

    for(int i=0;i<n-1;i++){
        if(t[i]=='B'){
            res.push_back(i+1);
            if(t[i]=='B')   t[i]='W';
            else            t[i]='B';
            if(t[i+1]=='B') t[i+1]='W';
            else            t[i+1]='B';
        }
    }
    if(t[n-1]=='W'){
        cout<<res.size()<<"\n";
        for(int x:res)    cout<<x<<" ";
        cout<<"\n";
        return 0;
    }
    t=s;
    res.clear();
    for(int i=0;i<n-1;i++){
        if(t[i]=='W'){
            res.push_back(i+1);
            if(t[i]=='B')   t[i]='W';
            else            t[i]='B';
            if(t[i+1]=='B') t[i+1]='W';
            else            t[i+1]='B';
        }
    }
    if(t[n-1]=='B'){
        cout<<res.size()<<"\n";
        for(int x:res)    cout<<x<<" ";
        cout<<"\n";
        return 0;
    }
    cout<<-1<<"\n";
    return 0;
}