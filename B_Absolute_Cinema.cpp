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

        vector<long long>arr(n),brr(n);
        for(int i=0;i<n;i++)    cin>>arr[i];
        for(int i=0;i<n;i++)    cin>>brr[i];

        long long maxi=0,sum=0;
        for(int i=0;i<n;i++){
            if(arr[i]>brr[i])   swap(arr[i],brr[i]);
            maxi=max(maxi,arr[i]);
            sum+=brr[i];
        }
        cout<<maxi+sum<<"\n";
    }
    return 0;
}