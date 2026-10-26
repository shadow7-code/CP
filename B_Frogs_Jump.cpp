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
        string a,b;
        cin>>a>>b;
        int x=0;
        for(int i=0;i<n;i++)    if((a[i]=='f')!=(b[i]=='f'))    x++;
        if(x&1)    cout<<1<<"\n";
        else       cout<<0<<"\n";
    }

    return 0;
}