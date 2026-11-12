#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t; 
    while(t--){
        int n,res=0;
        cin>>n;
        string s;
        cin>>s;
        for(char c='b';c<='z';c++){
            bool flag=false;
            for(int i=0;i<n/2;i++){
                char x=min(s[i],s[n-1-i]),y=max(s[i],s[n-1-i]);
                if(c>x && c<=y){
                    flag=true;
                    break;
                }
            }
            if(flag)    res++;
        }
        cout<<res<<"\n";
    } 
    return 0;
}
