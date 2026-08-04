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
        string a,b;
        cin>>a>>b;
        long long res=0;
        bool flag=true;
        for(int i=0;i<2;i++){
            vector<int> arr,brr;
            for(int j=i;j<n;j+=2){
                if(a[j]=='1')    arr.push_back(j/2);
                if(b[j]=='1')    brr.push_back(j/2);
            }
            if(arr.size()!=brr.size()){
                flag=false;
                break;
            }
            for(int j=0;j<arr.size();j++)    res+=abs(arr[j]-brr[j]);
        }
        if(flag)    cout<<res<<"\n";
        else        cout<<"-1\n";
    }
    return 0;
}