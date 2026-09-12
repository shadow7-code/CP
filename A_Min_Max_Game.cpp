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
        vector<int> arr(n);
        int cnt=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i])    cnt++;
        }
        if(cnt>=(n+1)/2)    cout<<"Bessie\n";
        else                cout<<"Elsie\n";
    }
    return 0;
}