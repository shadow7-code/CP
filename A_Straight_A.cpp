#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k,sum=0;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        sum+=x;
    }
    int res=0;
    while(2*(sum+res*k)<(2*k-1)*(n+res)){
        res++;
    }
    cout<<res;
}