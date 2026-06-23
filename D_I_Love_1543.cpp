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
        vector<string> arr(n);
        for(int i=0;i<n;i++)    cin>>arr[i];
        int res=0;
        vector<char> sim(4000);
        for(int i=0;(i+1)*2<=n && (i+1)*2<=m;i++){
            int idx=0;
            for(int j=i;j<m-i;j++)        sim[idx++]=arr[i][j];        //l-r
            for(int j=i+1;j<n-i-1;j++)    sim[idx++]=arr[j][m-i-1];    //t-b
            for(int j=m-i-1;j>=i;j--)     sim[idx++]=arr[n-i-1][j];    //r-l
            for(int j=n-i-2;j>=i+1;j--)   sim[idx++]=arr[j][i];        //b-t
            for(int j=0;j<idx;j++){
                if(sim[j]=='1' && sim[(j+1)%idx]=='5' &&
                   sim[(j+2)%idx]=='4' && sim[(j+3)%idx]=='3'){
                    res++;
                }
            }
        }
        cout<<res<<"\n";
    }
    return 0;
}