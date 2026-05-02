#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)    cin>>arr[i];

    int res=0;
    for(int i=1;i<n-1;i++){
        if(arr[i-1]==1 && arr[i]==0 && arr[i+1]==1){
            res++;
            arr[i+1]=0;
        }
    }
    cout<<res;
    return 0;
}