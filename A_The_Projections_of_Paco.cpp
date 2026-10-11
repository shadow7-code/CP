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
        for(int i=0;i<n;i++){ 
            int x;
            cin>>x; 
            if(i%2==0)    res+=x;
            else          res-=x;
        }
        cout<<res<<"\n";
    } 
    return 0;
}