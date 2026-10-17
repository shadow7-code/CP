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
        vector<long long> arr(n);
        bool flag=true;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(i>0 && arr[i]!=arr[0])    flag=false;
        }
        if(flag)    cout<<arr[0]<<"\n";
        else{
            long long mini=*min_element(arr.begin(),arr.end()),maxi=*max_element(arr.begin(),arr.end()),res=maxi;
            long long x=mini^maxi;
            int b=0;
            while(x>1)    x/=2,b++;
            for(int i=0;i<=b;i++)    res|=(1LL<<i);
            cout<<res<<"\n";
        }
    }
    return 0;
}