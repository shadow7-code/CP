#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;
    vector<vector<int>>arr(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    vector<long long>power(51);
    power[0]=1;
    for(int i=1;i<=50;i++){
        power[i]=power[i-1]*2;
    }

    long long res=0;
    for(int i=0;i<n;i++){
        int cnt0=0,cnt1=0;
        for(int j=0;j<m;j++){
            if(arr[i][j]==0)    cnt0++;
            else    cnt1++;
        }
        res+=power[cnt0]-1;
        res+=power[cnt1]-1;
    }
    for(int j=0;j<m;j++){
        int cnt0=0,cnt1=0;
        for(int i=0;i<n;i++){
            if(arr[i][j]==0)    cnt0++;
            else    cnt1++;
        }
        res+=power[cnt0]-1;
        res+=power[cnt1]-1;
    }
    res-=n*m;
    cout<<res<<"\n";
    return 0;
}