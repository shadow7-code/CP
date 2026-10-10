
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
        int m=0;
        while((1<<m)<=n)    m++;

        vector<int> arr={0};
        for(int i=0;i<m;i++){
            vector<int> brr=arr;
            brr.push_back(1<<i);
            for(int j=arr.size()-1;j>=0;j--)    brr.push_back(arr[j]);
            arr=brr;
        }
        int x=arr.size();
        cout<<x<<"\n";
        for(int i=0;i<x;i++){
            cout<<arr[i];
            if(i+1==x)    cout<<"\n";
            else          cout<<" ";
        }
    }
    return 0;
}
