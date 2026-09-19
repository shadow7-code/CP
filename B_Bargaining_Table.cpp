#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;
    vector<string> arr(n);
    for(int i=0;i<n;i++)    cin>>arr[i];
    vector<vector<int>> pref(n+1,vector<int>(m+1,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            pref[i+1][j+1]=pref[i][j+1]+pref[i+1][j]-pref[i][j];
            if(arr[i][j]=='1')    pref[i+1][j+1]++;
        }
    }
    int res=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            for(int x=i;x<n;x++){
                for(int y=j;y<m;y++){
                    int cnt=pref[x+1][y+1]-pref[i][y+1]-pref[x+1][j]+pref[i][j];
                    if(cnt==0){
                        int h=x-i+1;
                        int w=y-j+1;
                        res=max(res,2*(h+w));
                    }
                }
            }
        }
    }
    cout<<res<<"\n";
    return 0;
}