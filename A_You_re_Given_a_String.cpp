#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    int n=s.size(), res=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int cnt=0;
            while(i+cnt<n && j+cnt<n && s[i+cnt]==s[j+cnt])    cnt++;
            res=max(res,cnt);
        }
    }
    cout<<res;
    return 0;
}