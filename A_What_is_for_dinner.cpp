#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m,k;
    cin>>n>>m>>k;
    vector<int> arr(m+1,1000000000);
    for(int i=0;i<n;i++){
        int r,c;
        cin>>r>>c;
        arr[r]=min(arr[r],c);
    }
    int res=0;
    for(int i=1;i<=m;i++){
        res+=arr[i];
        if(res>=k){
            res=k;
            break;
        }
    }
    cout<<res<<"\n";
    return 0;
}