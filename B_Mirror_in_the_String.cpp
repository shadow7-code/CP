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
        int k=1;
        if(n>1 && s[0]!=s[1]){
            while(k<n && s[k]<=s[k-1]){
                k++;
            }
        }
        string res=s.substr(0,k);
        for(int i=k-1;i>=0;i--)    res.push_back(s[i]);
        cout<<res<<"\n";
    }

    return 0;
}