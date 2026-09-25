#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        char c;
        cin>>n>>c;
        string s;
        cin>>s;
        int l=0,r=n-1,res=0;
        while(l<r){
            if(s[l]!=s[r]){
                if(s[l]==c || s[r]==c) res++;
                else                   res+=2;
            }
            l++,r--;
        }
        cout<<res<<"\n";
    }

    return 0;
}