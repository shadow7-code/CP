#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>> arr(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }

        long long res=0;
        for(int j=0;j<m;j++){
            vector<int> brr;
            for(int i=0;i<n;i++){
                brr.push_back(arr[i][j]);
            }
            sort(brr.begin(),brr.end());
            long long sum=0;
            for(int i=0;i<n;i++){
                res+=(long long)brr[i]*i-sum;
                sum+=brr[i];
            }
        }
        cout<<res<<"\n";
    }
    return 0;
}