
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        long long n,sum=0,summ=0;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(i%2==0)    arr[i]=-arr[i];
        }
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            if(i<(n+1)/2)    sum+=arr[i];
            else             summ+=arr[i];
        }
        cout<<summ-sum<<"\n";
    }

    return 0;
}
