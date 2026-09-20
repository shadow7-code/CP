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
        int cnt[10]={};
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            cnt[x%10]++;
        }
        vector<int> arr;
        for(int i=0;i<10;i++)   for(int j=0;j<min(cnt[i],3);j++)    arr.push_back(i);

        int m=arr.size();
        bool flag=false;
        for(int i=0;i<m;i++){
            for(int j=i+1;j<m;j++){
                for(int k=j+1;k<m;k++){
                    if((arr[i]+arr[j]+arr[k])%10==3){
                        flag=true;
                    }
                }
            }
        }
        if(flag)    cout<<"YES\n";
        else        cout<<"NO\n";
    }

    return 0;
}