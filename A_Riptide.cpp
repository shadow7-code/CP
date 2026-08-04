#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        vector<int> arr(3);
        cin>>arr[0]>>arr[1]>>arr[2];

        int res=0;
        sort(arr.begin(),arr.end());
        while(arr[0]!=arr[1] && arr[1]!=arr[2]){
            arr[0]++,arr[2]--,res++;
            sort(arr.begin(),arr.end());
        }
        cout<<res<<"\n";
    }
    return 0;
}