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
        vector<int>arr;
        arr.push_back(INT_MIN);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(arr.back()!=x)    arr.push_back(x);
        }
        arr.push_back(INT_MIN);
        int res=0;
        for(int i=1;i<arr.size()-1;i++){
            if(arr[i]>arr[i-1]&&arr[i]>arr[i+1])    res++;
        }
        cout<<res<<"\n";
    }
    return 0;
}