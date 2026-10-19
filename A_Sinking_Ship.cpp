#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    vector<string> arr(n), brr(n);
    for(int i=0;i<n;i++)    cin>>arr[i]>>brr[i];
    for(int i=0;i<n;i++)    if(brr[i]=="rat")                         cout<<arr[i]<<"\n";
    for(int i=0;i<n;i++)    if(brr[i]=="woman" || brr[i]=="child")    cout<<arr[i]<<"\n";
    for(int i=0;i<n;i++)    if(brr[i]=="man")                         cout<<arr[i]<<"\n";
    for(int i=0;i<n;i++)    if(brr[i]=="captain")                     cout<<arr[i]<<"\n";
    return 0;
}