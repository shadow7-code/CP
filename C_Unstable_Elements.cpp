#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> arr(n),brr;
        for(int i=0;i<n;i++)    cin>>arr[i];
        int cnt=1;
        for(int i=1;i<n;i++){
            if(arr[i]==arr[i-1])    cnt++;
            else{
                brr.push_back(cnt);
                cnt=1;
            }
        }
        brr.push_back(cnt);
        sort(brr.begin(),brr.end());

        int m=brr.size(),sum=0,res=0,i=0;
        while(i<m){
            int len=brr[i], x=len-1, q=m-i;
            int curlen=n-sum-x*q;
            if(curlen<=k)   if((k-curlen)%q==0)    res++;
            int j=i;
            while(j<m&&brr[j]==len)    j++;
            sum+=(j-i)*len;
            i=j;
        }
        cout<<res<<"\n";
    }
    return 0;
}