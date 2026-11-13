#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k,q;
    cin>>n>>k>>q;
    vector<int> arr(200005,0);
    for(int i=0;i<n;i++){
        int l,r;
        cin>>l>>r;
        arr[l]++;
        arr[r+1]--;
    }
    for(int i=1;i<=200000;i++)    arr[i]+=arr[i-1];
    for(int i=1;i<=200000;i++){
        if(arr[i]>=k)    arr[i]=1;
        else             arr[i]=0;
    }
    for(int i=1;i<=200000;i++)    arr[i]+=arr[i-1];
    for(int i=0;i<q;i++){
        int a,b;
        cin>>a>>b;
        cout<<arr[b]-arr[a-1]<<"\n";
    }
    return 0;
}