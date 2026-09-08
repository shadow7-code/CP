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
        int z=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==0)    z++;
        }
        if(z<2)    cout<<-1<<"\n";
        else{
            int res=0;
            if(arr[0]==1)    res++;
            if(arr[n-1]==1)    res++;
            cout<<res<<"\n";
        }
    }
    return 0;
}