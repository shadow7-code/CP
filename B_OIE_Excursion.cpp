#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;

        int c=0,cnt=0,maxi=1;

        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            if(i==0){
                c=a;
                cnt=1;
            }else if(a!=c){
                maxi=max(maxi,cnt);
                c=a;
                cnt=1;
            }else cnt++;
        }

        maxi=max(maxi,cnt);

        if(maxi<m)    cout<<"YES\n";
        else        cout<<"NO\n";
    }
    return 0;
}