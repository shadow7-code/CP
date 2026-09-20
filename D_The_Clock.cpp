#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        string s;
        int x;
        cin>>s>>x;
        int cur=(s[0]-'0')*600+(s[1]-'0')*60+(s[3]-'0')*10+(s[4]-'0');
        vector<bool> vis(1440,false);
        int res=0;
        for(int i=0;i<1440;i++){
            if(vis[cur])    break;
            vis[cur]=true;
            int h=cur/60,m=cur%60;
            if(h/10==m%10 && h%10==m/10)    res++;
            cur=(cur+x)%1440;
        }
        cout<<res<<"\n";
    }
    return 0;
}