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
        int cnt=1;
        for(int i=1;i<n;i++)    if(s[i]!=s[i-1])    cnt++;

        int res=cnt;
        for(int i=1;i<n-1;i++){
            int rem=0,add=0;
            if(s[i-1]!=s[i])    rem++;
            if(s[i]!=s[i+1])    rem++;
            if(s[i-1]!=s[i+1])  add=1;
            res=min(res,cnt-rem+add);
        }
        cout<<res<<"\n";
    }
    return 0;
}