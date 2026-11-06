#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        long long n,a=0,b=0;
        cin>>n;
        vector<long long>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            arr[i]=pow(2,arr[i]);
        }
        sort(arr.begin(),arr.end());
        for(int i=n-1;i>=0;i--){
            if(a<=b)    a+=arr[i];
            else        b+=arr[i];
        }
        cout<<a*b<<"\n";
    }
    return 0;
}