#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    vector<long long> arr;
    long long p=10;
    for(int i=1;i<=18;i++){
        arr.push_back(p+1);
        p*=10;
    }
    while(t--){
        long long n;
        cin>>n;
        vector<long long> brr;
        for(int i=0;i<18;i++)    if(n%arr[i]==0)    brr.push_back(n/arr[i]);
        
        sort(brr.begin(),brr.end());
        cout<<brr.size()<<"\n";
        for(int i=0;i<brr.size();i++)    cout<<brr[i]<<" ";
        if(brr.size()>0)    cout<<"\n";
    }
    return 0;
}