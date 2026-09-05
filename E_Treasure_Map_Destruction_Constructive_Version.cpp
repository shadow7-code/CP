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
        vector<int> arr(n),notalw(n+1,0),brr(n,1);
        for(int i=0;i<n;i++)    cin>>arr[i];
        for(int i=0;i<n;i++){
            if(arr[i]==-1)    continue;
            int x=max(0,i-arr[i]+1),y=min(n-1,i+arr[i]-1);
            if(x<=y){
                notalw[x]++;
                notalw[y+1]--;
            }
        }

        int sum=0;
        for(int i=0;i<n;i++){
            sum+=notalw[i];
            if(sum>0)    brr[i]=0;
        }
        bool flag=true;
        for(int i=0;i<n;i++){
            if(arr[i]==-1)    continue;
            int x=i-arr[i],y=i+arr[i];
            if((x<0 || brr[x]==0) && (y>=n || brr[y]==0)){
                flag=false;
                break;
            }
        }
        if(!flag)    cout<<-1<<"\n";
        else{
            for(int i=0;i<n;i++)    cout<<brr[i];
            cout<<"\n";
        }
    }
    return 0;
}