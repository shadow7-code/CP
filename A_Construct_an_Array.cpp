#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=1;i<=2*n-1;i+=2)    cout<<i<<" ";
        cout<<"\n";
    }
}