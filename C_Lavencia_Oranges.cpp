#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t; 
    int N=2e5;
    vector<long long> pre(N+1,0);
    for(int i=1;i<=N;i++)    for(int j=i;j<=N;j+=i)    pre[j]+=i;

    while(t--){ 
        int n;
        cin>>n;
        int res=0;
        long long x=0;
        while(x<n){
            res++;
            x+=pre[res];
        }
        cout<<res<<"\n";
        vector<int> arr(n);
        int y=0,v=1,rem=n;

        for(int i=res;i>=1;i--){
            int cnt=min(res/i,rem/i);
            for(int j=0;j<cnt;j++){
                fill(arr.begin()+y,arr.begin()+y+i,v);
                y+=i;
                v++;
            }
            rem-=cnt*i;
        }
        for(int i=0;i<n;i++){
            if(i==n-1)    cout<<arr[i];
            else          cout<<arr[i]<<" ";
        }
        cout<<"\n";
    } 
    return 0;
}