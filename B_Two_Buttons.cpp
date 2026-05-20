#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;
    int res=0;
    while(m!=n){
        if(m<n)           m++;
        else if(!(m&1))   m/=2;
        else              m++;
        res++;
    }
    cout<<res;
    return 0;
}