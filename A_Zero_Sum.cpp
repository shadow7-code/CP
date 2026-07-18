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
        int sum=0;
        for(int i=0,x;i<n;i++){
            cin>>x;
            sum+=x;
        }
        if(n%2)              cout<<"NO\n";
        else if(!(sum%4))    cout<<"YES\n";
        else                 cout<<"NO\n";
    } 
    return 0;
}