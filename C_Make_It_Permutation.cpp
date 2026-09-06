#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t; 
    while(t--){ 
        int n;
        long long c,d;
        cin>>n>>c>>d;
        vector<int> arr(n);
        for(int i=0;i<n;i++)    cin>>arr[i];
        sort(arr.begin(),arr.end());

        vector<int> brr;
        long long sum=0;
        for(int i=0;i<n;i++){
            if(i>0 && arr[i]==arr[i-1])    sum+=c;
            else                         brr.push_back(arr[i]);
        }

        int m=brr.size();
        long long res=LLONG_MAX;
        for(int i=0;i<m;i++){
            long long cost=1LL*(brr[i]-(i+1))*d;
            cost+=1LL*(m-i-1)*c;
            res=min(res,cost);
        }
        res=min(res,1LL*m*c+d);

        cout<<sum+res<<'\n';
    } 
    return 0;
}