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
        vector<int> arr(n+1);
        for(int i=1;i<=n;i++)    cin>>arr[i];
        bool flag=true;
        int last=INT_MAX;
        for(int i=1;i<=n;i++){
            if(arr[i]!=i){
                if(arr[i]>=last){
                    flag=false;
                    break;
                }
                last=arr[i];
            }
        }
        if(flag)    cout<<"YES\n";
        else        cout<<"NO\n";
    }
    return 0;
}