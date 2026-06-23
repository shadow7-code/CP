#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        long long k;
        cin>>n>>k;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)    cin>>arr[i];

        int l=0,r=n-1, res=0;
        while(l<=r && k>0){
            if(l==r ){
                if(k>=arr[l])    res++;
                break;
            }
            long long mini=min(arr[l],arr[r]);
            if(k>=2*mini){
                k-=2*mini;
                arr[l]-=mini,arr[r]-=mini;
                if(arr[l]==0){
                    res++;
                    l++;
                }
                if(arr[r]==0){
                    res++;
                    r--;
                }
            }else{
                arr[l]-=(k+1)/2,arr[r]-=k/2;
                if(arr[l]==0)    res++;
                if(arr[r]==0)    res++;
                k=0;
            }
        }
        cout<<res<<"\n";
    }
    return 0;
}