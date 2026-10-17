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
        string s;
        cin>>s;

        int l=0,r=n-1,x=count(s.begin(),s.end(),'1');
        if(x==1)        cout<<0<<"\n";
        else if(x==2)   cout<<1<<"\n";
        else{
        while(l<n && s[l]!='1')     l++;
        while(r>=0 && s[r]!='1')    r--;
        cout<<r-l<<"\n";}
    }
    return 0;
}