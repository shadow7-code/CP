#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t; 
    while(t--){ 
        long long n,k;
        cin>>n>>k;
        vector<long long> a(n),b(n),c(n),arr(n),brr(n);
        vector<bool> dead(n,false);

        long long mini=4000000000000000000LL,cap=4000000000000000000LL;

        for(int i=0;i<n;i++){
            cin>>a[i]>>b[i]>>c[i];
            arr[i]=a[i]+b[i]+c[i];
            if(a[i]==b[i] && b[i]==c[i]){
                dead[i]=true;
                if(arr[i]<cap){
                    cap=arr[i];
                }
            }
            if(a[i]<=b[i] && b[i]<=c[i] && !dead[i])    brr[i]=min(b[i]-a[i],c[i]-b[i])+1;
            else               brr[i]=0;
            if(arr[i]<mini)    mini=arr[i];
        }

        long long lo=mini,hi=mini+k;
        if(cap<hi)    hi=cap;
        long long res=lo;
        while(lo<=hi){
            long long mid=lo+(hi-lo)/2,cnt=0;
            bool flag=true;
            for(int i=0;i<n;i++){
                if(arr[i]>=mid)    continue;
                if(dead[i]){
                    flag=false;
                    break;
                }
                long long req=(mid-arr[i])+2*brr[i];
                if(k-cnt<req){
                    flag=false;
                    break;
                }
                cnt+=req;
            }
            if(flag){
                res=mid;
                lo=mid+1;
            }else{
                hi=mid-1;
            }
        }
        cout<<res<<"\n";
    } 
    return 0;
}