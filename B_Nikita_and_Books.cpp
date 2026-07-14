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
        vector<long long>arr(n);
        for(int i=0;i<n;i++)    cin>>arr[i];

        long long pref=0;
        bool flag=true;
        for(int i=0;i<n;i++){
            pref+=arr[i];
            if(pref<i+1){
                flag=false;
                break;
            }
            pref-=i+1;
        }
        if(flag)    cout<<"YES\n";
        else        cout<<"NO\n";
    }
    return 0;
}