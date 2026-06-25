#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    vector<int> cnt(26,0);

    for(char c:s)    cnt[c-'a']++;
    int odd=0;
    for(int i=0;i<26;i++)    if(cnt[i] & 1)    odd++;
    if(odd==0 || (odd & 1))    cout<<"First\n";
    else                     cout<<"Second\n";

    return 0;
}