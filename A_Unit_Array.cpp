#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t; 
    while (t--){
        int n;
        cin>>n;
        int ncount=0,pcount=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            (x == 1 ? pcount : ncount)++;
        }
        int res=0;
        while(pcount<ncount || ncount & 1){
            res++;
            pcount++;
            ncount--;
        }
        cout<<res<<"\n";
    }
    return 0;
}