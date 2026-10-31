#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t; 
    while(t--){ 
        int r,p,s;
        cin>>r>>p>>s;
        if(p>=s)        for(int i=0;i<r+p+s;i++)    cout<<"R";
        else if(s>=r)   for(int i=0;i<r+p+s;i++)    cout<<"S";
        else            for(int i=0;i<r+p+s;i++)    cout<<"P";
        cout<<"\n";
    } 
    return 0;
}