#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        long long n,k,sum=0,x=0;
        cin>>n>>k;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)    cin>>arr[i];
        sort(arr.rbegin(),arr.rend());
        reverse(arr.begin(),arr.begin()+k);

        for(int i=0;i<n;i++){
            if(arr[i]*i>=sum)    x++;
            sum+=arr[i];
        }
        if(x==k){
            cout<<"YES\n";
            for(int i=0;i<n;i++)    cout<<arr[i]<<" ";
            cout<<"\n";
        }
        else    cout<<"NO\n";
    }
    return 0;
}