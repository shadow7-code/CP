#include<bits/stdc++.h>
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
        if(2*k>n){
            cout<<-1<<"\n";
        }else{
            int res=0;
            int i=0,j=n-1;
            while(i<k){
                if(s[i]!='R')    res++;
                if(s[j]!='L')    res++;
                i++,j--;
            }
            cout<<res<<"\n";
        }
    }
    return 0;
}