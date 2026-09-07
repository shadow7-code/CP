#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t; 
    while(t--){ 
        int n,k;
        cin>>n>>k;
        int cnt=0;
        while(k>=n && n>0){
            k-=n;
            n--;
            cnt++;
        }
        vector<int> arr;
        for(int i=0;i<n;i++)    arr.push_back(-1);
        
        if(n>0){
            if(k>0)    arr[k-1]=200;
            arr[k]=-400;
        }
        for(int i=0;i<cnt;i++)    arr.push_back(1000);
        for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<(i+1==arr.size()?"":" ");
        }
        cout<<"\n";
    } 
    return 0;
}