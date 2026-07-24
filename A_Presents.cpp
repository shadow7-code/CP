#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin>>n>>k;
    int cnt;
    cin>>cnt;
    vector<int> arr(cnt);
    for(int i=0;i<cnt;i++)    cin>>arr[i];
    int res=cnt, prev=0;

    for(int i=0;i<cnt;i++){
        int gap=arr[i]-prev-1;
        res+=gap/k;
        prev=arr[i];
    }
    res+=(n-prev)/k;
    cout<<res<<"\n";
    return 0;
}