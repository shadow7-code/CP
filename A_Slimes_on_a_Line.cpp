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
        int mini=INT_MAX,maxi=INT_MIN;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            mini=min(mini,x);
            maxi=max(maxi,x);
        }
        int d=maxi-mini;
        if(d&1)   cout<<d/2+1<<"\n";
        else      cout<<d/2<<"\n";
    }
    return 0;
}