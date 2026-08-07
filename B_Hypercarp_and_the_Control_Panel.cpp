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
        vector<int> arr(n);
        for(int i=0;i<n;i++)    cin>>arr[i];
        int cnt=1;
        for(int i=1;i<n;i++)    if(arr[i]!=arr[i-1])    cnt++;
        int maxi=cnt;
        for(int i=0;i<n-1;i++){
            int x=0,y=0;
            if(i>0){
                x+=(arr[i-1]!=arr[i]);
                y+=(arr[i-1]!=arr[i+1]);
            }
            x+=(arr[i]!=arr[i+1]);
            y+=(arr[i+1]!=arr[i]);
            if(i+2<n){
                x+=(arr[i+1]!=arr[i+2]);
                y+=(arr[i]!=arr[i+2]);
            }
            maxi=max(maxi,cnt-x+y);
        }
        cout<<maxi<<"\n";
    }
    return 0;
}