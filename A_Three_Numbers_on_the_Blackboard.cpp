#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        vector<long long> arr={a,b,c};
        sort(arr.begin(),arr.end());
        if(arr[2]>arr[0]+arr[1])    cout<<arr[1]<<"\n";
        else                        cout<<arr[2]-arr[0]<<"\n";
    }
    return 0;
}