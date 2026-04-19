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
        vector<long long>arr(n);
        long long res=0;
        int neg=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]<0){
                neg++;
                arr[i]=-arr[i];
            }
            res+=arr[i];
        }
        sort(arr.begin(),arr.end());
        if(neg%2)   res-=2*arr[0];
        cout<<res<<"\n";
    }
}