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
        vector<int> arr(n),freq(101,0);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            freq[arr[i]]++;
        }
        int x=0;
        while(x<n){
        for(int i=100;i>=1;i--){
            if(freq[i]>0){
                cout<<i<<" ";
                freq[i]--;
                x++;
            }
        }}
        cout<<"\n";
    }

    return 0;
}