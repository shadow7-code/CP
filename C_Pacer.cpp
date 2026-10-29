#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,m,px=0,py=0,res=0;
        cin>>n>>m;
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            res+=x-px;
            if((x-px)%2!=(y-py+2)%2)    res--;
            px=x,py=y;
        }
        res+=m-px;
        cout<<res<<"\n";
    }

    return 0;
}