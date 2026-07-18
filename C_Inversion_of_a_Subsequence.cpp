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
        vector<int>arr(n),brr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        for(int i=0;i<n;i++) cin>>brr[i];
        int a=count(arr.begin(),arr.end(),1);
        int b=count(brr.begin(),brr.end(),1);
        int cnt=0;
        bool flag=true;

        for(int i=0;i<n;i++){
            if(arr[i]!=brr[i])            flag=false;
            if(arr[i]==1 && brr[i]==0)    cnt++;
        }
        if(flag)                 cout<<0<<"\n";
        else if(a==0 || b==n)    cout<<-1<<"\n";
        else if(cnt&1)           cout<<1<<"\n";
        else                     cout<<2<<"\n";
    }
    return 0;
}