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
        for(int i=0;i<n;i++){
            if(arr[i]==1) break;
            if(arr[i]==-1){
                arr[i]=1;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(arr[i]==1) break;
            if(arr[i]==-1){
                arr[i]=1;
                break;
            }
        }
    
        for(int i=0;i<n;i++){
            if(arr[i]==-1) arr[i]=0;
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    } 
    return 0;
}