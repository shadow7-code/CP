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
        vector<long long> arr(n+1);
        int maxi=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]>arr[maxi])    maxi=i;
        }
        arr[n]=arr[0];
        long long res=-arr[maxi];
        for(int i=0;i<n;i++)    res+=max(arr[i],arr[i+1]);
        cout<<res<<"\n";
    }

    return 0;
}