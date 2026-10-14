#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>deg(n+1,0);
        for(int i=0;i<m;i++){
            int x,y;
            cin>>x>>y;
            deg[x]++,deg[y]++;
        }
        bool flag=false;
        for(int i=1;i<=n;i++)    if(deg[i]==0)    flag=true;
        if(flag)    cout<<"Brain Melt\n";
        else{
            flag=false;
            for(int i=1;i<=n;i++)    if(deg[i]==n-1)    flag=true;
            if(flag && m==n-1)    cout<<"2\n";
            else                  cout<<"Many\n";
        }
    }
    return 0;
}