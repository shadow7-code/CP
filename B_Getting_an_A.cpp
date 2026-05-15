#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<int>arr(n);
    int sum=0;

    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr.begin(),arr.end());

    int res=0;
    while((double)sum/n<4.5){
        sum+=5-arr[res];
        res++;
    }
    cout<<res;
}