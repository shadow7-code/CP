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
        vector<long long> arr(n);
        for(int i=0;i<n;i++)    cin>>arr[i];
        sort(arr.rbegin(),arr.rend());
        bool flag=true;
        for(int i=0;i+2<n;i++){
            if(arr[i]%arr[i+1]!=arr[i+2]){
                flag=false;
                break;
            }
        }
        if(flag)    cout<<arr[0]<<" "<<arr[1]<<"\n";
        else        cout<<"-1\n";
    }
    return 0;
}