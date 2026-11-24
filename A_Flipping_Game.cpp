#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,res=0;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)    cin>>arr[i];
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int x=0;
            for(int k=0;k<n;k++){
                if(k>=i && k<=j)    x+=(1-arr[k]);
                else                x+=arr[k];
            }
            res=max(res,x);
        }
    }
    cout<<res<<"\n";
    return 0;
}