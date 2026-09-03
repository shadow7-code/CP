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
        int res=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            res^=arr[i];
        }
        if(res==0)      cout<<0<<endl;
        else if(n&1)    cout<<res<<endl;
        else            cout<<-1<<endl;
    }
    return 0;
}