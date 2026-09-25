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
        vector<int> arr(n),pos(n+1);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            pos[arr[i]]=i;
        }
        int l=0,r=n-1;
        bool flag=true;
        for(int i=1;i<=n;i++){
            if((pos[i]&1)==(l&1))         l++;
            else if((pos[i]&1)==(r&1))    r--;
            else{
                flag=false;
                break;
            }
        }
        if(flag)    cout<<"YES\n";
        else        cout<<"NO\n";
    }

    return 0;
}