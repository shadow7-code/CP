#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,k,res=0;
        cin>>n>>k;
        vector<int>arr(n),eq(n,0);
        for(int i=0;i<n;i++)    cin>>arr[i];
        for(int i=1;i<n;i++){
            eq[i]=eq[i-1];
            if(arr[i]==arr[i-1])    eq[i]++;
        }
        for(int i=0;i<k;i++)    if(eq[n-k+i]-eq[i]==n-k)    res++;
        cout<<res<<"\n";
    }
    return 0;
}