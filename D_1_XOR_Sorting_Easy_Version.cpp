#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<int> arr(n);
        for(int i=0;i<n;i++)    cin>>arr[i];
        if(is_sorted(arr.begin(),arr.end())){
            cout<<0<<"\n";
            continue;
        }
        for(int x=0;;x++){
            int maxi=-1;
            bool flag=true;
            int len=(1<<(x+1));
            for(int j=0;j<n;j+=len){
                int curmax=-1;
                for(int i=j;i<min(j+len,n);i++){
                    if(maxi>arr[i])    flag=false;
                    curmax=max(curmax,arr[i]);
                }
                maxi=max(maxi,curmax);
            }
            if(flag){
                cout<<(1<<x)<<"\n";
                break;
            }
        }
    }
    return 0;
}