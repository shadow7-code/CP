#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        int x=0;
        for(int i=0;i<k;i++){
            int y;
            cin>>y;
            if(y>1)    x+=y-1;
        }
        if(x>=2)    cout<<"YES\n";
        else        cout<<"NO\n";
    }
    return 0;
}