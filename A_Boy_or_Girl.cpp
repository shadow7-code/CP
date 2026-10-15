#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin>>s;
    int cnt=0;
    vector<bool> arr(26,false);
    for(int i=0;i<s.length();i++)    arr[s[i]-'a']=true;
    for(int i=0;i<26;i++)    if(arr[i])    cnt++;
    if(cnt%2&1)    cout<<"IGNORE HIM!\n";
    else           cout<<"CHAT WITH HER!\n";
}