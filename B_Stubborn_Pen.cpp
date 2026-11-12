#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t; 
    while(t--){ 
        int n,x=0;
        cin>>n;
        string s;
        cin>>s;
        if(s[0]=='B') x++;
        for(int i=1;i<n;i++)    if(s[i]==s[i-1])    x++;
        cout<<x<<"\n";
    }
    return 0;
}
