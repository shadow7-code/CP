#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long l;
    cin>>n>>l;
    vector<long long> arr(n);
    for(int i=0;i<n;i++)    cin>>arr[i];
    sort(arr.begin(),arr.end());
    double maxi=0;
    for(int i=1;i<n;i++)    if(arr[i]-arr[i-1]>maxi)    maxi=arr[i]-arr[i-1];
    double res=max({maxi/2.0,(double)arr[0],(double)(l-arr[n-1])});
    cout<<fixed<<setprecision(10)<<res<<"\n";
    return 0;
}