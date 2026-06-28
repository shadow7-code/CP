#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,c;
        cin>>n>>c;
        vector<int> arr(n),brr(n);
        long long suma=0,sumb=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            suma+=arr[i];
        }
        bool flag=true;
        for(int i=0;i<n;i++){
            cin>>brr[i];
            sumb+=brr[i];
            if(arr[i]<brr[i])    flag=false;
        }
        if(suma<sumb){
            cout<<-1<<"\n";
            continue;
        }
        int res=INT_MAX,diff=suma-sumb;
        if(flag)    res=diff;

        sort(arr.begin(),arr.end());
        sort(brr.begin(),brr.end());
        flag=true;
        for(int i=0;i<n;i++){
            if(arr[i]<brr[i]){
                flag=false;
                break;
            }
        }
        if(flag)    res=min(res,diff+c);

        if(res==INT_MAX)    cout<<-1<<"\n";
        else                cout<<res<<"\n";
    }
    return 0;
}