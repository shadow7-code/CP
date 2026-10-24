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
        bool flag=false;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x<n)   flag=true;
        }
        if(flag)    cout<<n<<"\n";
        else        cout<<0<<"\n";
    }

    return 0;
}