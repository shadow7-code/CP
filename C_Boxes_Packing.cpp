#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,res=0;
    cin>>n;
    vector<int> arr(n);
    map<int,int> freq;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        freq[arr[i]]++;
        res=max(res,freq[arr[i]]);
    }
    cout<<res<<"\n";
    return 0;
}