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
        string str;
        cin>>str;
        vector<int> arr(n+1,0),brr(n+1,0);
        for(int i=1;i<=n;i++)    if(str[i-1]=='1') arr[i]=1;
        long long res=0;
        for(int i=1;i<=n;i++){
            if(arr[i]==1) continue;
            for(int j=i;j<=n;j+=i){
                if(arr[j]==1)    break;
                if(brr[j]==0)    brr[j]=i;
            }
        }
        for(int i=1;i<=n;i++)    if(arr[i]==0)    res+=brr[i];
        cout<<res<<"\n";
    }
    return 0;
}