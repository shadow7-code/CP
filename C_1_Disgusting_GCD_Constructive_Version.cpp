
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long maxi=3e6+1;
    vector<int> prime(maxi,1);
    prime[0]=prime[1]=0;
    for(int i=2;i*i<maxi;i++){
        if(prime[i]){    for(int j=i*i;j<maxi;j+=i)    prime[j]=0;}
    }
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> arr(n),brr(n);
        for(int i=0;i<n;i++)    cin>>arr[i];
        for(int i=0;i<n;i++){
            long long x=arr[i];
            while(!prime[x]) x++;
            brr[i]=x;
        }
        for(int i=0;i<n;i++)    cout<<brr[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
