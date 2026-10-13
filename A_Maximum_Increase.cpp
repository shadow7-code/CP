#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)    cin>>arr[i];
    int res=0,l=0;
    for(int i=0;i<n;i++){
        if(i>0 && arr[i]<=arr[i-1])    l=i;
        res=max(res,i-l+1);
    }
    cout<<res<<"\n";

}