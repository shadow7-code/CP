#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int l=0,r=0,c=0;

        for(char x:s){
            if(x=='0')      l++;
            else if(x=='1') r++;
            else            c++;
        }
        string res(n,'+');
        for(int i=0;i<n;i++){
            if(i<l+c||i+r+c>=n)     res[i]='?';
            if(i<l||i+r>=n||k==n)   res[i]='-';
        }
        cout<<res<<"\n";
    }
}