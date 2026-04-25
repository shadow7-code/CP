#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n;
        bool ok=false;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x==100)  ok=true;
        }
        cout<<(ok?"Yes":"No")<<"\n";
    }
    return 0;
}