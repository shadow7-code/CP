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
        vector<int> arr(n);
        for(int i=0;i<n;i++)    cin>>arr[i];
        int res=n;
        for(int i=0;i<n;i++){
            int x=0;
            for(int j=0;j<n;j++)    if(arr[j]%arr[i]==0)    x++;
            res=min(res,n-x);
        }
        cout<<res<<"\n";
    }

    return 0;
}