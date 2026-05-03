#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>arr(n);
        for(int i=0;i<n;i++)    cin>>arr[i];

        long long g1=0,g2=0;
        for(int i=0;i<n;i+=2)    g1=__gcd(g1,arr[i]);
        for(int i=1;i<n;i+=2)    g2=__gcd(g2,arr[i]);

        bool flag=true;
        for(int i=1;i<n;i+=2){
            if(arr[i]%g1==0){
                flag=false;
                break;
            }
        }
        if(flag){
            cout<<g1<<"\n";
            continue;
        }
        flag=true;
        for(int i=0;i<n;i+=2){
            if(arr[i]%g2==0){
                flag=false;
                break;
            }
        }
        if(flag)    cout<<g2<<"\n";
        else        cout<<0<<"\n";
    }
    return 0;
}