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
        vector<int>arr(n);
        for(int i=0;i<n;i++)    cin>>arr[i];

        int res=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                res=max(res,arr[i]^arr[j]);
            }
        }
        cout<<res<<"\n";
    }
    return 0;
}