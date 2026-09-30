#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> arr(n),brr(n);
        for(int i=0;i<n;i++)    cin>>arr[i];
        for(int i=0;i<n;i++)    cin>>brr[i];
        long long res=0,extra=0;
        bool flag=true;
        for(int i=0;i<n;i++){
            if(extra>1000000000LL){
                flag=false;
                break;
            }
            long long x=arr[i]+2*extra-brr[i];
            if(x<0){
                flag=false;
                break;
            }
            res+=x;
            extra=x;
        }
        if(extra!=0)    flag=false;
        if(flag)    cout<<res<<"\n";
        else    cout<<-1<<"\n";
    }
    return 0;
}