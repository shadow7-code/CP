#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,k,res=0,cnt=0;
        cin>>n>>k;
        vector<int> arr(n+1,0);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            arr[x]++;
        }

        for(int i=0;i<n;i++){
            cnt+=arr[i];
            if(arr[i]>=1 && cnt>=k)    res++,cnt-=k;
            else    break;
        }
        cout<<res<<"\n";
    }

    return 0;
}