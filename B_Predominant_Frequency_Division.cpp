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
        vector<int>arr(n+1);
        for(int i=1;i<=n;i++)    cin>>arr[i];
        vector<int>pref1(n+1),pref2(n+1),pref3(n+1);

        for(int i=1;i<=n;i++){
            pref1[i]=pref1[i-1],pref2[i]=pref2[i-1],pref3[i]=pref3[i-1];
            if(arr[i]==1)       pref1[i]++;
            else if(arr[i]==2)  pref2[i]++;
            else                pref3[i]++;
        }
        int mini=INT_MAX;
        bool flag=false;
        for(int i=1;i<n;i++){
            int cur=pref1[i]+pref2[i]-pref3[i];
            if(cur>=mini){
                flag=true;
                break;
            }
            if(pref1[i]>=pref2[i]+pref3[i]){
                mini=min(mini,cur);
            }
        }
        if(flag)    cout<<"YES\n";
        else        cout<<"NO\n";
    }

    return 0;
}