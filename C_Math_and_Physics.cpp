
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int sum=0,n;
        cin>>n;
        vector<int>arr(n);
        bool flag=false;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
            if(i>0 && i<n-1 && arr[i]>=2)    flag=true;
        }
        if(flag)                             cout<<sum-1<<"\n";
        else if(arr[0]>=2 || arr[n-1]>=2)    cout<<sum-(n-1)<<"\n";
        else cout<<-1<<"\n";
    }
    return 0;
}
