#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n<3){
        cout<<0<<"\n";
        return 0;
    }
    int mini=0, maxi=0;
    for(int i=2;i<n;i++){
        if(arr[i-1]<arr[mini]) mini=i-1;
        if(arr[i-1]>arr[maxi]) maxi=i-1;
        
        if(mini<maxi && arr[mini]<arr[maxi] && arr[i]<arr[maxi]){
            cout<<3<<"\n";
            cout<<mini+1<<" "<<maxi+1<<" "<<i+1<<"\n";
            return 0;
        }
        if(maxi<mini && arr[maxi]>arr[mini] && arr[i]>arr[mini]){
            cout<<3<<"\n";
            cout<<maxi+1<<" "<<mini+1<<" "<<i+1<<"\n";
            return 0;
        }
    }
    cout<<0<<"\n";
    return 0;
}